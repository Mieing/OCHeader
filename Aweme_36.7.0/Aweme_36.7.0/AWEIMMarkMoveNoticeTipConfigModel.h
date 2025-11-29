@class NSString, UIFont, UIColor;

@interface AWEIMMarkMoveNoticeTipConfigModel : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *avatarName;
@property (nonatomic) double avatarWidth;
@property (nonatomic) double avatarLeft;
@property (nonatomic) double avatarTop;
@property (nonatomic) double titleLabelLeft;
@property (retain, nonatomic) UIFont *titleLabelFont;
@property (retain, nonatomic) UIColor *titleLabelColor;
@property (retain, nonatomic) UIFont *subTitleLabelFont;
@property (retain, nonatomic) UIColor *subTitleLabelColor;
@property (nonatomic) double subTitleLabelTop;
@property (nonatomic) double deleteBtnRight;
@property (nonatomic) double deleteBtnLeft;
@property (nonatomic) double deleteBtnWidth;
@property (nonatomic) double deleteBtnTop;
@property (nonatomic) BOOL tokenEnable;
@property (copy, nonatomic) NSString *tokenText;
@property (retain, nonatomic) UIFont *tokenTextFont;
@property (retain, nonatomic) UIColor *tokenColor;
@property (copy, nonatomic) NSString *tokenTailIconName;
@property (nonatomic) BOOL cardClickEnable;
@property (nonatomic) int serviceType;
@property (copy, nonatomic) NSString *jumpSchema;

+ (id)defaultConfig;

- (void).cxx_destruct;
- (id)init;

@end
