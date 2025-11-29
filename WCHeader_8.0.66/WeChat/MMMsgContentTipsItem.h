@class UIColor, NSString, NSArray, UIImage, UIView;

@interface MMMsgContentTipsItem : NSObject

@property (nonatomic) long long bizType;
@property (nonatomic) long long style;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) UIColor *titleColor;
@property (retain, nonatomic) UIImage *iconImage;
@property (nonatomic) struct CGSize { double width; double height; } iconSize;
@property (retain, nonatomic) NSArray *animationImages;
@property (nonatomic) double animationDuration;
@property (nonatomic) BOOL showRightArrow;
@property (retain, nonatomic) id userData;
@property (retain, nonatomic) NSString *topLineTitle;
@property (nonatomic) BOOL allowLineBreak;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) BOOL showCloseBtn;
@property (retain, nonatomic) NSString *rightBtnText;
@property (retain, nonatomic) NSString *rightBtnConfirmText;
@property (retain, nonatomic) NSString *rightDescText;
@property (nonatomic) double duration;
@property (nonatomic) BOOL disableClickState;
@property (retain, nonatomic) UIColor *rightArrowColor;
@property (nonatomic) BOOL showBorder;
@property (retain, nonatomic) UIColor *borderColor;
@property (nonatomic) double borderWidth;
@property (retain, nonatomic) UIView *expandView;
@property (nonatomic) unsigned int voiceMsgClientId;
@property (retain, nonatomic) NSString *customMenuItemTitle;

- (id)init;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isConsideredEqualForReport:(id)a0;
- (void).cxx_destruct;

@end
