@class NSString;

@interface ACCTapicEngineImpl : HTSService <ACCTapicEngineProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)triggerWithType:(long long)a0;

@end
