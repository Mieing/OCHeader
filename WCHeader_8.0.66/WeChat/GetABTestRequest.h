@class NSMutableArray;

@interface GetABTestRequest : WXPBGeneratedMessage

@property (nonatomic) unsigned int lastTimestamp;
@property (retain, nonatomic) NSMutableArray *clientexplist;
@property (nonatomic) unsigned int clientTimestamp;
@property (nonatomic) unsigned int flag;

+ (void)initialize;

@end
