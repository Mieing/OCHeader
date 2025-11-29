@class NSString, IESECSKUDetailContext, IESECSKUCarAdaptModel;

@interface IESECSKUCarAdaptViewModel : NSObject <IESECSKUViewModelProtocol>

@property (retain, nonatomic) IESECSKUDetailContext *detailContext;
@property (retain, nonatomic) IESECSKUCarAdaptModel *carAdaptInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSKUModel:(id)a0 detailContext:(id)a1;
- (void)trackWithEventName:(id)a0 once:(id)a1;
- (BOOL)canJumpToCarAdapt;
- (void).cxx_destruct;
- (BOOL)hasCar;

@end
