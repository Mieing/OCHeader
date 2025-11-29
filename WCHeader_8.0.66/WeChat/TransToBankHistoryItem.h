@class NSString;

@interface TransToBankHistoryItem : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *transferBillId;
@property (nonatomic) unsigned int state;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *transferTime;
@property (nonatomic) unsigned long long transferUnixtime;
@property (retain, nonatomic) NSString *moneyText;
@property (retain, nonatomic) NSString *bankLogo;
@property (retain, nonatomic) NSString *stateText;
@property (retain, nonatomic) NSString *stateColor;

+ (void)initialize;

@end
