@class AWEPLVCardMarkLabel, UIImageView, NSString, UIView, UILabel;

@interface AWEGamePlayWithFriendCardCell : UICollectionViewCell <AWEGameCellProtocol>

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) AWEPLVCardMarkLabel *markLabel;
@property (retain, nonatomic) UIView *infoBackgroundView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
