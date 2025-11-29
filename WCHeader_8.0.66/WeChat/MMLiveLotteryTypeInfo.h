@class NSString;

@interface MMLiveLotteryTypeInfo : NSObject

@property (nonatomic) int optionValue;
@property (retain, nonatomic) NSString *optionName;
@property (retain, nonatomic) NSString *desc;
@property (nonatomic) BOOL disableSelect;

- (void).cxx_destruct;

@end
