@class NSString, AWEFCoinTaskDataBubble;

@interface AWEFCoinTaskData : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL hasNext;
@property (nonatomic) long long nextCycleTime;
@property (copy, nonatomic) NSString *nextToken;
@property (nonatomic) long long coinAmount;
@property (retain, nonatomic) AWEFCoinTaskDataBubble *bubble;
@property (nonatomic) BOOL pendantUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
