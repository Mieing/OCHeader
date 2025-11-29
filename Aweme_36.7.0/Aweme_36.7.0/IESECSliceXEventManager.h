@class IESECSliceXInstance;
@protocol IESECSliceXEventForwardDelegate;

@interface IESECSliceXEventManager : NSObject

@property (weak, nonatomic) id<IESECSliceXEventForwardDelegate> eventForwardDelegate;
@property (weak, nonatomic) IESECSliceXInstance *instance;

- (void)handleAction:(id)a0 context:(id)a1;
- (id)initWithSliceInstance:(id)a0;
- (void).cxx_destruct;

@end
