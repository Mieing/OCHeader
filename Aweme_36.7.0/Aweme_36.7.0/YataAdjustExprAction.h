@class NSString, YataStore, YataEventData;
@protocol YataInstanceInnerInterface;

@interface YataAdjustExprAction : NSObject <YataAction>

@property (retain, nonatomic) YataEventData *eventData;
@property (weak, nonatomic) YataStore *store;
@property (nonatomic) BOOL success;
@property (weak, nonatomic) id<YataInstanceInnerInterface> yataInstance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)actionKey;
- (void).cxx_destruct;

@end
