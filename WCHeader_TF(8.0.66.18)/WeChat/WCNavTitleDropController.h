@class NSArray, MMDropableTitleView, NSString, MMUIViewController, UIView;
@protocol WCNavTitleDropControllDelegate;

@interface WCNavTitleDropController : NSObject <MMDropableTitleViewDelegate> {
    MMUIViewController *_attachViewController;
    NSString *_title;
    UIView *_backgroundView;
    UIView *_operateContentView;
}

@property (weak, nonatomic) id<WCNavTitleDropControllDelegate> delegate;
@property (readonly, nonatomic) NSArray *arrItems;
@property (readonly, nonatomic) BOOL isShowingItems;
@property (readonly, nonatomic) MMDropableTitleView *titleView;
@property (nonatomic) double dropViewOriginY;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewController:(id)a0 title:(id)a1 dropItems:(id)a2;
- (void)initTitleView;
- (void)updateTitle:(id)a0 animated:(BOOL)a1;
- (void)initBackgroundViews;
- (void)initOperateContentView;
- (void)initItemView;
- (void)addTopLineView;
- (id)makeButtonWithItem:(id)a0 index:(int)a1;
- (void)showItems;
- (void)dismissView;
- (id)getButtonByIndex:(unsigned int)a0;
- (void)updateItemSelectedIndex:(unsigned int)a0;
- (void)onClickDropableTitleView:(id)a0;
- (void)onTapCancel:(id)a0;
- (void)onClickOperateItem:(id)a0;
- (void).cxx_destruct;

@end
