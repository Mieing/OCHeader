@class NSString, NSData;

@interface WARealtimeDataOperation : MMObject

@property (nonatomic) unsigned int retryCount;
@property (nonatomic) unsigned int lastOperateTimeStamp;
@property (nonatomic) int operationId;
@property (copy, nonatomic) NSString *appid;
@property (nonatomic) unsigned long long priorityLevel;
@property (nonatomic) int type;
@property (retain, nonatomic) NSData *contentsBytes;

- (unsigned long long)dataSize;
- (BOOL)time:(unsigned int)a0 inRetryInterval:(unsigned int)a1;
- (id)description;
- (void).cxx_destruct;

@end
