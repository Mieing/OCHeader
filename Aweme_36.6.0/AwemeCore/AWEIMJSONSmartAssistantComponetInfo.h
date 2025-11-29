@class NSString;

@interface AWEIMJSONSmartAssistantComponetInfo : AWEBaseApiModel

@property (copy, nonatomic) NSString *componentID;
@property (copy, nonatomic) NSString *answer;
@property (nonatomic) long long msgType;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *componentType;
@property (nonatomic) long long componentMsgType;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
