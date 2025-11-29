@class NSString, FlexActivity_Countdown;

@interface IESLivePKFlexActivityEntranceConfig : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *buttonString;
@property (copy, nonatomic) NSString *ruleURL;
@property (copy, nonatomic) NSString *countDownDescription;
@property (nonatomic) long long timeStamp;
@property (retain, nonatomic) FlexActivity_Countdown *countdown;
@property (copy, nonatomic) NSString *statusString;
@property (copy, nonatomic) NSString *navString;
@property (nonatomic) unsigned long long flexActivityID;
@property (nonatomic) unsigned long long status;
@property (nonatomic) int displayMode;

- (void).cxx_destruct;

@end
