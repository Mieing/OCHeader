@class IESEffectModel;

@interface ACCLivePhotoEditResourceManager : NSObject

@property (nonatomic) BOOL shouldFetchBgImageList;
@property (retain, nonatomic) IESEffectModel *transitionEffectModel;

+ (id)sharedInstance;

- (BOOL)livePhotoTransitionExist;
- (void)fetchTransitionList;
- (void)onClearCache;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
