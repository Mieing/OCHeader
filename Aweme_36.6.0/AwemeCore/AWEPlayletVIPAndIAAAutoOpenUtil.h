@class NSString, AWEPlayletVIPAndIAAAutoOpenUtilSetupModel;
@protocol AWEPaymentEventHandlerProtocol, AWEPaymentDetailEventHandlerProtocol;

@interface AWEPlayletVIPAndIAAAutoOpenUtil : NSObject <AWEPaymentEventHandlerDelegate, AWEPlayletVIPAndIAAAutoOpenUtilProtocol>

@property (retain, nonatomic) id<AWEPaymentEventHandlerProtocol, AWEPaymentDetailEventHandlerProtocol> paymentEventHandle;
@property (nonatomic) BOOL isVIPSchemaShowing;
@property (retain, nonatomic) AWEPlayletVIPAndIAAAutoOpenUtilSetupModel *setupModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)playletCardAutoOpenTypeWithModel:(id)a0;
+ (void)openVipSchemaWithAwemeModel:(id)a0 object:(id)a1;
+ (BOOL)isVipAutoBuyABTestExperiment;

- (void)handlePayEvent:(id)a0;
- (id)getCurrentAwemeModel;
- (id)getContextModelWithAwemeModel:(id)a0;
- (void)p_openVipSchemaInStateWithAwemeModel:(id)a0;
- (void)registerOpenUtilWithAwemeModel:(id)a0;
- (void)resetOpenContextWithAwemeModel:(id)a0;
- (void)openVipSchemaInStateWithAwemeModel:(id)a0;
- (void)currentModelIsChangeWithAwemeModel:(id)a0;
- (BOOL)needContextWithAwemeModel:(id)a0;
- (BOOL)openVIPSchemaOfTryWatchFinishWithCurrentPlaybackTime:(double)a0 withAwemeModel:(id)a1;
- (void).cxx_destruct;
- (void)execute;
- (void)setup:(id)a0;

@end
