@class YataRenderState, YataProtocolModel, NSString;
@protocol YataState, YataInstanceInnerInterface;

@interface YataRenderAction : NSObject <YataAction>

@property (retain, nonatomic) id<YataState> state;
@property (readonly, nonatomic) YataRenderState *renderState;
@property (retain, nonatomic) YataProtocolModel *protocolData;
@property (nonatomic) unsigned long long triggerSource;
@property (copy, nonatomic) NSString *eventTrigger;
@property (nonatomic) BOOL reloadAll;
@property (weak, nonatomic) id<YataInstanceInnerInterface> yataInstance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
