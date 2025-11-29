@class NSString;

@interface AWEFeedTabJumpTriggerRecord : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *tabID;
@property (copy, nonatomic) NSString *awemeID;
@property (copy, nonatomic) NSString *timestamp;
@property (copy, nonatomic) NSString *eventType;
@property (copy, nonatomic) NSString *strategyID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
