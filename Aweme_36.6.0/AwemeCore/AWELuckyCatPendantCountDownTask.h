@class NSString;

@interface AWELuckyCatPendantCountDownTask : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL hasNext;
@property (nonatomic) long long nextCycleTime;
@property (copy, nonatomic) NSString *nextToken;
@property (nonatomic) long long nodeID;
@property (nonatomic) long long nodeTime;
@property (nonatomic) long long stopRefreshInterval;
@property (nonatomic) long long interval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
