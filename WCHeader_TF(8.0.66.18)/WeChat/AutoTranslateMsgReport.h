@interface AutoTranslateMsgReport : NSObject

@property (nonatomic) unsigned int expectCount;
@property (nonatomic) unsigned int handleCount;
@property (nonatomic) unsigned long long startTimestamp;
@property (nonatomic) unsigned long long endTimestamp;

- (void)reset;
- (void)startAutoTraslateWithExpectCnt:(unsigned int)a0;
- (void)reportKV;

@end
