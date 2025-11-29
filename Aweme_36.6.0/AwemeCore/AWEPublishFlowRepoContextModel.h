@class NSString, AWEPublishInfiniTaskAutoRetryStrategy, AWEVideoPublishViewModel, AWEPublishBaseTask, NSNumber;
@protocol AWEPublishMultiSplitSubTaskProtocol, ACCSequenceEditServiceProtocol, AWEPublishEditServiceManagerProtocol;

@interface AWEPublishFlowRepoContextModel : MTLModel <MTLJSONSerializing>

@property (weak, nonatomic) AWEPublishBaseTask *task;
@property (retain, nonatomic) id<AWEPublishMultiSplitSubTaskProtocol> associatedMultiSplitSubTask;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (retain, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (retain, nonatomic) id<AWEPublishEditServiceManagerProtocol> editServiceManager;
@property (retain, nonatomic) AWEPublishInfiniTaskAutoRetryStrategy *autoRetryStrategy;
@property (readonly, nonatomic) BOOL isSingleVideo;
@property (readonly, nonatomic) BOOL isSingleImageAsImageAlbumPublish;
@property (nonatomic) BOOL draftSaving;
@property (nonatomic) BOOL appInBackground;
@property (nonatomic) BOOL isEnterdBackground;
@property (nonatomic) BOOL isPreUploadSuccessed;
@property (retain, nonatomic) NSString *totalFileSize;
@property (retain, nonatomic) NSNumber *imageScoreStageFlag;
@property (nonatomic) long long mergeImageCount;
@property (nonatomic) long long mergeVideoCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isSingleProject;
- (BOOL)isCanvansPhotoAndEnablePublishAsImageAlbum;
- (BOOL)isCommonMerge;
- (BOOL)isBuildedSingleVideoMerge;
- (BOOL)isBuildedSingleImageMerge;
- (BOOL)isSuitableSingleTask;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
