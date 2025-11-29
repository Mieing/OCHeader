@class AFDFriendRecommendMultiAvatarViewConfig, UIColor, UIFont;

@interface AFDFriendRecommendTagViewConfig : NSObject

@property (nonatomic) double containerHeight;
@property (retain, nonatomic) AFDFriendRecommendMultiAvatarViewConfig *avatarConfig;
@property (nonatomic) double rightBtnWidth;
@property (nonatomic) double rightBtnImageSize;
@property (nonatomic) double containerLeftMargin;
@property (nonatomic) double containerRightMargin;
@property (nonatomic) double userNameLabelLeftOffset;
@property (nonatomic) double infoLabelLeftOffset;
@property (nonatomic) double rightBtnLeftOffset;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } hitTestingInsets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } rightBtnHitTestingInsets;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIFont *textFont;
@property (retain, nonatomic) UIColor *textColor;

- (void).cxx_destruct;

@end
