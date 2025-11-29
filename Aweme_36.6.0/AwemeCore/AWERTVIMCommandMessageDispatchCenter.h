@class NSDictionary, NSString;
@protocol RxInjector;

@interface AWERTVIMCommandMessageDispatchCenter : NSObject <IESIMRTVCommandMsgNotifierDelegate>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, copy, nonatomic) NSDictionary *commandTypeMapper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (id)__logTag;
- (id)__commandTypeMapper;
- (void)iesim_didReceiveRTVCommandMessage:(id)a0;
- (void).cxx_destruct;

@end
