@class NSString;

@interface PanelBtn : IESLivePBBaseMessage

@property (nonatomic) int btnType;
@property (copy, nonatomic) NSString *btnText;
@property (copy, nonatomic) NSString *btnColor;
@property (copy, nonatomic) NSString *toast;

+ (id)descriptor;

@end
