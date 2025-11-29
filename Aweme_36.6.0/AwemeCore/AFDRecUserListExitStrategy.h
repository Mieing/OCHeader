@class NSNumber, NSString;

@interface AFDRecUserListExitStrategy : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *exitDaysAfterClose;
@property (retain, nonatomic) NSNumber *closeTimesThreshold;
@property (retain, nonatomic) NSNumber *exitDaysAfterClickCloseThresholdTimes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
