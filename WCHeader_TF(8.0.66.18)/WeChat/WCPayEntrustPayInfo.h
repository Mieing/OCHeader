@class NSString, NSArray;

@interface WCPayEntrustPayInfo : NSObject

@property (retain, nonatomic) NSString *contractTitle;
@property (nonatomic) BOOL isAutoDeduct;
@property (retain, nonatomic) NSArray *showInfo;
@property (retain, nonatomic) NSString *contractUrl;
@property (nonatomic) BOOL isSelectPayWay;
@property (nonatomic) unsigned int uiDeductShowType;
@property (retain, nonatomic) NSString *buttonWording;
@property (retain, nonatomic) NSString *deductRuleWording;
@property (retain, nonatomic) NSString *openDeductWording;
@property (retain, nonatomic) NSString *open_deduct_wording_color;

- (void).cxx_destruct;

@end
