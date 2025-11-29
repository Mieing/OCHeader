@class NSString;

@interface AWESearchLifeServiceBaseDataController : AWESearchVerticalDataController <AWESearchLifeServiceBaseDataControllerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handlePatchResponse:(id)a0;
- (id)p_getValidResponse:(id)a0;

@end
