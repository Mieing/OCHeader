@class UIFont, NSString, UIImageView, UILabel, UIView;

@interface AWEFoodTakeoutAnchorView : UIView <AWEFoodTakeoutAnchorProtocol>

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *mainTitleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIView *titleSeparator;
@property (retain, nonatomic) UIFont *font;
@property (readonly, nonatomic) double iconWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
