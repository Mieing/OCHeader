@class NSString, NSMutableDictionary, NSURL, NSNumber;
@protocol ACCWorkspaceReader, ACCPublishRepository, ACCRepoDataContext;

@interface AWERepoTranscodingModel : NSObject <ACCRepositoryCompareProtocol, AWERepositoryDraftProtocol, ACCRepositoryTrackContextDeprecated, ACCCreationDataAccess, NSCopying, ACCRepositoryContextDeprecated, ACCRepositoryRequestParamsDeprecated>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long compileLevel;
@property (nonatomic) long long transType;
@property (nonatomic) BOOL isReencode;
@property (nonatomic) BOOL isByteVC1;
@property (nonatomic) unsigned long long bitRate;
@property (nonatomic) unsigned long long outputWidth;
@property (nonatomic) unsigned long long outputHeight;
@property (retain, nonatomic) NSURL *uploadURL;
@property (nonatomic) long long uploadFileSize;
@property (readonly, nonatomic) NSMutableDictionary *videoComposeQualityTraceInfo;
@property (readonly, nonatomic) NSMutableDictionary *videoQualityTraceInfo;
@property (nonatomic) double exportVideoDuration;
@property (nonatomic) int encodeBitsType;
@property (nonatomic) int encodeHdrType;
@property (nonatomic) unsigned long long notRemuxErrorcode;
@property (retain, nonatomic) NSNumber *uploadSpeedIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCRepoDataContext> dataContext;
@property (weak, nonatomic) id<ACCWorkspaceReader> workspaceReader;
@property (weak, nonatomic) id<ACCPublishRepository> repoDeprecated;

- (id)acc_publishRequestParams:(id)a0;
- (id)initWithDraft:(id)a0;
- (void)saveWithDraft:(id)a0;
- (id)acc_publishTrackEventParams:(id)a0;
- (id)customEidtStatusCompareParams:(id)a0 scene:(long long)a1;
- (id)convertAllResolution;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)currentResolution;

@end
