@class UIButton, NSString, UILabel, NSMutableArray, UIView;

@interface CAKAlbumSelectedAssetsBottomView : UIView <CAKAlbumBottomViewProtocol>

@property (retain, nonatomic) NSMutableArray *buttonList;
@property (retain, nonatomic) UIView *seperatorLineView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *nextButton;
@property (retain, nonatomic) UIButton *selectOriginalImageButton;
@property (copy, nonatomic) id /* block */ switchOriginSelectBlock;
@property (nonatomic) BOOL doAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateLayoutConstaint;
- (void)onSwitchOriginImageSelect;
- (void)addOriginalButtonWithGreyMode:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addButton:(id)a0;
- (void)removeButton:(id)a0;

@end
