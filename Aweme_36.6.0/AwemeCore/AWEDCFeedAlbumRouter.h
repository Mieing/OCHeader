@class NSString;

@interface AWEDCFeedAlbumRouter : AWEDCFeedBaseRouter <AFDFullPageFeedContainerViewControllerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadFullPageFeedAdapterClass;

- (void)fullPageFeedWillPlayModel:(id)a0 index:(long long)a1;
- (void)fullPageFeedImageLoadFinishWithAweme:(id)a0 index:(long long)a1;
- (void)fullPageFeedViewDidDisappear:(id)a0;
- (void)fullPageFeedViewDidAppear:(id)a0;
- (id)tidyAwemeConfig;
- (void)enterVCWithRouterTargetModel:(id)a0;
- (void)enterAlbumDetailAtIndexPath:(id)a0 withTidyModel:(id)a1 referString:(id)a2 selectedCell:(id)a3 logExtraDict:(id)a4;
- (id)albumDetailDefaultPayloadWithModel:(id)a0 selectedCell:(id)a1 referString:(id)a2;
- (id)aAWEPadFullPageFeedAdapter;

@end
