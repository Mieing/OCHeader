@class NSString, AWEUndertakeEcomPeekContentModel;

@interface AWEUndertakeEcomStrategyModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long code;
@property (copy, nonatomic) NSString *msg;
@property (retain, nonatomic) AWEUndertakeEcomPeekContentModel *peekContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)peekContentJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
