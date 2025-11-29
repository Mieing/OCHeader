@class NSString, UIImageView, IESLiveImageView, UILabel;

@interface AWELivePreStreamLiveDistributeBigCell : UICollectionViewCell <IGListBindable>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *heatCountLabel;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) IESLiveImageView *iconImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
