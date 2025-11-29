@class NSString, NSMutableArray;
@protocol IESECWinProductsSelectButtonContainerDelegate;

@interface IESECWinProductsSelectButtonContainer : UIView <IESECRelationTagListViewDelegate> {
    NSMutableArray *_buttons;
}

@property (weak, nonatomic) id<IESECWinProductsSelectButtonContainerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showSubTag:(id)a0;
- (void)clickSubTag:(id)a0;
- (void)updateWithSelectButtons:(id)a0;
- (double)tagViewWidthWithCount:(long long)a0;
- (void)handleTagDidClick:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
