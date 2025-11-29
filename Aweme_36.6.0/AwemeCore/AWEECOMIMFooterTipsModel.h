@class NSString, NSAttributedString, AWEECOMIMFootDescActionItemButtonStyle;

@interface AWEECOMIMFooterTipsModel : NSObject

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSAttributedString *content;
@property (nonatomic) unsigned long long buttonType;
@property (retain, nonatomic) AWEECOMIMFootDescActionItemButtonStyle *rejectButtonStyle;
@property (retain, nonatomic) AWEECOMIMFootDescActionItemButtonStyle *recoverButtonStyle;
@property (copy, nonatomic) NSString *bizCategory;
@property (nonatomic) BOOL isButtonFromServer;
@property (copy, nonatomic) NSString *logoUrl;
@property (copy, nonatomic) NSString *logoDesc;

+ (id)buttonTypeWithCardType:(id)a0;
+ (void)registerButtonType:(id)a0 cardType:(id)a1;
+ (id)getButtonTypeWithCardType:(id)a0;

- (void).cxx_destruct;

@end
