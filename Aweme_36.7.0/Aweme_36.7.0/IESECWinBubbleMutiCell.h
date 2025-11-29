@class NSString, UIImageView, UILabel, UIView;

@interface IESECWinBubbleMutiCell : UICollectionViewCell <IESECWinBubbleProtocol>

@property (retain, nonatomic) UIImageView *tagImage;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *imageMaskView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)bubbleCardHeight;
+ (double)bubbleCardWidth;

@end
