@class NSString;

@interface AWELivePreStreamEComElement : AWELiveBaseElement <AWELivePreStreamMessageSubscriber>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWELiveModuleServiceDOUYINAdaperClass;
+ (Class)aAWELiveModuleServiceDOUYINLiteAdaperClass;

- (void)preloadElement;
- (void)onMessageReceivce:(id)a0 withDict:(id)a1;
- (void)roomInfoBySceneReceive:(id)a0 extendArea:(id)a1;
- (id)aAWELiveModuleServiceDOUYINLiteAdaper;
- (id)aAWELiveModuleServiceDOUYINAdaper;
- (void)setData:(id)a0;
- (void)reset;

@end
