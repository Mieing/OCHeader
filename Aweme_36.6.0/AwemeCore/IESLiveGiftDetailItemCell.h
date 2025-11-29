@class NSString, UIImageView, IESLiveGiftPanelDataSharing, UILabel, UIView;

@interface IESLiveGiftDetailItemCell : UICollectionViewCell

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) NSString *clickURLString;
@property (retain, nonatomic) IESLiveGiftPanelDataSharing *giftPanelDataSharing;

- (void)didSetAttachingDIContext;
- (void)didClick;
- (void)trackWhenPropDetailEntranceShow:(id)a0;
- (void)trackWhenPropDetailEntranceClicked:(id)a0;
- (void).cxx_destruct;

@end
