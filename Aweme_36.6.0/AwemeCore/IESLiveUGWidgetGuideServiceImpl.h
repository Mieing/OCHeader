@class NSString;

@interface IESLiveUGWidgetGuideServiceImpl : NSObject <AWEUGWidgetAddGuideViewDelegate, IESLiveUGWidgetGuideService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ didShowBlock;
@property (copy, nonatomic) id /* block */ didHideBlock;
@property (copy, nonatomic) id /* block */ gotoAddBlock;

- (void)refreshLayout:(long long)a0;
- (void)hideGuideView;
- (void)widgetGuideViewStartToAddWidget:(id)a0;
- (void)widgetGuideViewDidShow:(id)a0;
- (void)widgetGuideViewDidHide:(id)a0;
- (void)widgetGuideViewWithExtraImageURLsAsynchronous:(id)a0 completion:(id /* block */)a1;
- (void)showGuideViewWithContainer:(id)a0 extraImageURLs:(id)a1;
- (void)showGuideViewWithContainer:(id)a0 extraImageURLs:(id)a1 extraParams:(id)a2;
- (void).cxx_destruct;

@end
