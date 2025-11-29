@class NSString;

@interface AWEMusicCommonGuideStoreService : NSObject <AWEMusicGuideStoreProtocol>

@property (copy, nonatomic) NSString *key;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canShowCollectionGuide;
- (void)userPlayingInBack;
- (BOOL)canShowBgGuide;
- (Class)guidePopupViewClass;
- (void)bgGuideDidShow;
- (id)bgGuideTutorialType;
- (void)collectionGuideDidShow;
- (BOOL)canShowGotoMyCollectionGuide;
- (void)gotoMyCollectionGuideDidShow;
- (BOOL)canShowChangeSongGuide;
- (void)changeSongGuideDidShow;
- (void).cxx_destruct;
- (id)initWithKey:(id)a0;

@end
