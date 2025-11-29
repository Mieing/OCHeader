@class UIButton;
@protocol WCFinderProfileAudioPostTabCellDelegate;

@interface WCFinderProfileAudioPostTabCell : UICollectionViewCell

@property (retain, nonatomic) UIButton *postBtn;
@property (retain, nonatomic) UIButton *manageBtn;
@property (nonatomic) unsigned int options;
@property (weak, nonatomic) id<WCFinderProfileAudioPostTabCellDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)onPostBtnClick;
- (void)onManageBtnClick;
- (void).cxx_destruct;

@end
