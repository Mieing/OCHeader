@class ACCCreationRepoContainer, NSString, NSObject;
@protocol OS_dispatch_group;

@interface ACCTarotSlidesImportConfig : NSObject

@property (nonatomic) BOOL useImageTaskGroup;
@property (nonatomic) BOOL useVideoTaskGroup;
@property (nonatomic) BOOL useLivePhotoTaskGroup;
@property (nonatomic) BOOL hasPlaceHolderProject;
@property (nonatomic) BOOL hasVideoCoverError;
@property (nonatomic) BOOL hasError;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *highPriorityTaskGroup;
@property (retain, nonatomic) ACCCreationRepoContainer *repoContainer;
@property (copy, nonatomic) NSString *taskID;
@property (copy, nonatomic) NSString *createID;

- (void).cxx_destruct;

@end
