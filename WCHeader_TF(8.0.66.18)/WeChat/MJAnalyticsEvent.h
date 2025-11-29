@class NSString, NSMutableArray;

@interface MJAnalyticsEvent : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *errorCode;
@property (retain, nonatomic) NSString *errorMessage;
@property (retain, nonatomic) NSMutableArray *keys;
@property (retain, nonatomic) NSMutableArray *values;
@property (retain, nonatomic) NSMutableArray *expands;
@property (nonatomic) long long timeStamp;

+ (void)initialize;

@end
