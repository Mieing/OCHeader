@class CAGradientLayer, NSString, UIImageView, UIView, UILabel;

@interface IESLiveGiftPartitionSupplementaryView : UICollectionReusableView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UIView *headerContainer;
@property (retain, nonatomic) UIImageView *headerImageView;
@property (retain, nonatomic) UIView *entranceContainer;
@property (retain, nonatomic) UILabel *entranceLabel;
@property (retain, nonatomic) UIImageView *entranceIcon;
@property (copy, nonatomic) NSString *entranceSchema;
@property (copy, nonatomic) id /* block */ handleTapEntranceBlock;

- (void)didSetAttachingDIContext;
- (void)updateWithSectionInfo:(id)a0;
- (void)handleEntranceTap;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)setupUI;

@end
