@class NSString, NSMutableDictionary;

@interface IESLiveGameCPListPopupServiceImpl : NSObject <IESGCPLiveListPopupService>

@property (retain, nonatomic) NSMutableDictionary *popupItemMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)attachingDIContext;
- (void)hideAllPopupItemImmediately;
- (void)showPanelWithContentView:(id)a0 type:(long long)a1 containerType:(long long)a2 backgroundColor:(id)a3 showCompletion:(id /* block */)a4 hideCompletion:(id /* block */)a5 tapBackgroundHandler:(id /* block */)a6;
- (void)hidePanelWithType:(long long)a0;
- (struct CGSize { double x0; double x1; })popupContainerViewSizeWithContainerType:(long long)a0;
- (long long)popupItemTypeWithGameCPType:(long long)a0;
- (long long)liveContainerTypeWithContainerType:(long long)a0;
- (id)createPopupItemWithContentView:(id)a0 type:(long long)a1 containerType:(long long)a2 showCompletion:(id /* block */)a3 hideCompletion:(id /* block */)a4 tapBackgroundHandler:(id /* block */)a5;
- (id)popupItemBackgroundContainer;
- (void).cxx_destruct;

@end
