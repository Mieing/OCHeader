@class NSString;

@interface AWEIMCombineShareListContent : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long serverMessageId;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *text;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)initWithMessage:(id)a0;

@end
