@class NSString, NSAttributedString;

@interface AWEDeliveryFooterTipsModel : NSObject

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSAttributedString *content;
@property (copy, nonatomic) NSString *logoUrl;
@property (copy, nonatomic) NSString *logoDesc;

+ (id)buttonTypeWithCardType:(id)a0;
+ (void)registerButtonType:(id)a0 cardType:(id)a1;

- (void).cxx_destruct;

@end
