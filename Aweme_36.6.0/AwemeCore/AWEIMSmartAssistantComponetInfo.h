@class NSString;

@interface AWEIMSmartAssistantComponetInfo : GPBMessage

@property (copy, nonatomic) NSString *componentId;
@property (nonatomic) BOOL hasComponentId;
@property (copy, nonatomic) NSString *answer;
@property (nonatomic) BOOL hasAnswer;
@property (nonatomic) long long msgType;
@property (nonatomic) BOOL hasMsgType;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) BOOL hasContent;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL hasName;
@property (copy, nonatomic) NSString *componentType;
@property (nonatomic) BOOL hasComponentType;
@property (nonatomic) int componentMsgType;
@property (nonatomic) BOOL hasComponentMsgType;

+ (id)descriptor;

@end
