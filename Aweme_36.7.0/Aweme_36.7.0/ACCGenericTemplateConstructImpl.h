@class NSString;

@interface ACCGenericTemplateConstructImpl : NSObject <ACCGenericTemplateConstructProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)preparationMiddlewaresWithContext:(id)a0;
- (id)applyHandlersWithContext:(id)a0;

@end
