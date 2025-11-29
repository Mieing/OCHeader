@class NSString, UILabel, UIView, IESECUIImageView;

@interface IESECWinBubbleDoubleCell : UICollectionViewCell <IESECWinBubbleProtocol>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) IESECUIImageView *arrowImageView;
@property (retain, nonatomic) UIView *coverBottomView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)coverWidth;
+ (double)bubbleCardHeight;
+ (double)bubbleCardWidth;

@end
