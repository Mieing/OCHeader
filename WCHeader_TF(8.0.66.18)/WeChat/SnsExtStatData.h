@class NSMutableArray;

@interface SnsExtStatData : WXPBGeneratedMessage {
    int errCodeListMemoizedSerializedSize;
}

@property (nonatomic) unsigned int firstRequestTime;
@property (nonatomic) unsigned int currentRequestTime;
@property (nonatomic) unsigned int retryTimes;
@property (nonatomic) unsigned int retryScene;
@property (nonatomic) unsigned int errCodeCount;
@property (retain, nonatomic) NSMutableArray *errCodeList;

+ (void)initialize;

- (void)setErrCodeList:(id)a0;
- (id)errCodeList;
- (void)setErrCodeCount:(unsigned int)a0;
- (unsigned int)errCodeCount;
- (void)setRetryScene:(unsigned int)a0;
- (unsigned int)retryScene;
- (void)setRetryTimes:(unsigned int)a0;
- (unsigned int)retryTimes;
- (void)setCurrentRequestTime:(unsigned int)a0;
- (unsigned int)currentRequestTime;
- (void)setFirstRequestTime:(unsigned int)a0;
- (unsigned int)firstRequestTime;

@end
