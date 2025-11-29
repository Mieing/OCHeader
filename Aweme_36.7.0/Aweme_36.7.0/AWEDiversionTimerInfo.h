@class NSString, AWEDiversionTimerModel;

@interface AWEDiversionTimerInfo : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEDiversionTimerModel *info;
@property (copy, nonatomic) NSString *crossToken;
@property (nonatomic) double currentWatchedTime;
@property (nonatomic) double lastWatchedTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
