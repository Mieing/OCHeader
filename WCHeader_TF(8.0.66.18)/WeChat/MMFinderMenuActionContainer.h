@class MMScrollActionSheet, NSString, UIScrollView, NSMutableArray;
@protocol MMFinderMenuActionDelegate;

@interface MMFinderMenuActionContainer : UIView <MMFinderForwardButtonDelegate, MMMenuControllerExt>

@property (retain, nonatomic) NSMutableArray *contacts;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (nonatomic) unsigned long long bizScene;
@property (nonatomic) long long longpressedIndex;
@property (weak, nonatomic) id<MMFinderMenuActionDelegate> delegate;
@property (weak, nonatomic) MMScrollActionSheet *actionSheet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 contacts:(id)a1 bizScene:(unsigned long long)a2;
- (void)initView;
- (id)createNameLabel:(id)a0;
- (void)layoutSubviews;
- (void)onItemClick:(id)a0;
- (void)onLongpress:(long long)a0;
- (void)onMenuControllerWillHide;
- (void)onDelete:(id)a0;
- (void)resetContacts:(long long)a0;
- (void).cxx_destruct;

@end
