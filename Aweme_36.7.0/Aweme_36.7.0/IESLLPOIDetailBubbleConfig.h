@class NSString;

@interface IESLLPOIDetailBubbleConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *configName;
@property (copy, nonatomic) NSString *sendEventName;
@property (copy, nonatomic) NSString *receiveEventName;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) BOOL activated;
@property (copy, nonatomic) id /* block */ bubbleBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
