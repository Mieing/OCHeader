@class NSString, ButtonViewData;

@interface AlertDialog : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *wording;
@property (retain, nonatomic) ButtonViewData *btnCancel;
@property (retain, nonatomic) ButtonViewData *btnConfirm;

+ (void)initialize;

@end
