@class AWEPlayInteractionContext, NSString, AWECommonButtonInfoModel;
@protocol AWEPlayInteractionBottomButtonComponentProtocol;

@interface AWEPlayInteractionBottomButtonDouECPViewModel : NSObject <AWEPlayInteractionBottomButtonComponentViewModelProtocol>

@property (retain, nonatomic) AWECommonButtonInfoModel *infoModel;
@property (weak, nonatomic) AWEPlayInteractionContext *context;
@property (weak, nonatomic) id<AWEPlayInteractionBottomButtonComponentProtocol> component;
@property (retain, nonatomic) NSString *douECPUrl;

+ (BOOL)shouldShowButtonForModel:(id)a0 context:(id)a1;

- (long long)activateType;
- (void)didShowViewByTriggerDelay:(BOOL)a0;
- (id)initWithInfoModel:(id)a0 context:(id)a1 component:(id)a2;
- (void)didClickView:(id)a0 atPosition:(long long)a1 withModel:(id)a2;
- (BOOL)isDouECPButton:(id)a0;
- (void)prefetchDouECP:(id)a0;
- (void).cxx_destruct;

@end
