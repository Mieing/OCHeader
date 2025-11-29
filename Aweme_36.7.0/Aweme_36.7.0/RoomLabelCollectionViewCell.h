@class IESLiveAction, UILabel, NSIndexPath, UIButton;
@protocol RoomLabelCollectionViewCellDelegate;

@interface RoomLabelCollectionViewCell : UICollectionViewCell

@property (weak, nonatomic) UIButton *closeButton;
@property (weak, nonatomic) UILabel *label;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (retain, nonatomic) IESLiveAction *deleteAction;
@property (weak, nonatomic) id<RoomLabelCollectionViewCellDelegate> delegate;

- (void)updateWithRoomIntroLabel:(id)a0;
- (void)didTouchDeleteAction:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
