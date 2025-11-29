@class NSString;

@interface PrizeType : WXPBGeneratedMessage

@property (nonatomic) unsigned int prizeType;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *wording;
@property (nonatomic) unsigned int timeLimit;
@property (nonatomic) unsigned int defaultTime;

+ (void)initialize;

@end
