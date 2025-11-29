@class NSString, NSMutableArray, UIViewController;

@interface BDPPluginPublicUIWidget : BDPBridgeInstancePlugin

@property (copy, nonatomic) NSString *svID;
@property (nonatomic) BOOL foundScrollView;
@property (retain, nonatomic) NSMutableArray *enhanceScrollViews;
@property (weak, nonatomic) UIViewController *controller;
@property (nonatomic) BOOL haveSheet;

- (void)showModalWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)bdp_findScrollViewsName:(id)a0;
- (void)findSubViewsWithView:(id)a0 bounces:(BOOL)a1;
- (void)showToastWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)hideToastWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)showActionSheetWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)addShortcutWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)setScrollViewBounceWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void).cxx_destruct;

@end
