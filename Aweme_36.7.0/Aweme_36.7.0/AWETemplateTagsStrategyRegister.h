@class NSString;

@interface AWETemplateTagsStrategyRegister : NSObject <AWETemplateTagsRegisterProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)strategyMap;
+ (BOOL)isValidRegisterItem:(id)a0;
+ (void)registerItem:(id /* block */)a0;


@end
