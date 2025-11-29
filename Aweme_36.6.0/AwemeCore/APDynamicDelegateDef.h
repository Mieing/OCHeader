@class NSString;

@interface APDynamicDelegateDef : NSObject <APDynamicProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dynamicCheckDispatch:(id)a0;
- (void)dynamicCheckCustomLocal:(int)a0;

@end
