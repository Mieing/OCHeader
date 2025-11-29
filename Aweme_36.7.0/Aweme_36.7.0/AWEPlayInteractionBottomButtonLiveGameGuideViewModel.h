@class AWEPlayInteractionContext, NSString, AWECommonButtonInfoModel;
@protocol AWEPlayInteractionBottomButtonComponentProtocol;

@interface AWEPlayInteractionBottomButtonLiveGameGuideViewModel : NSObject <AWELiveVideoFeedUpdateMessage, AWEPlayInteractionBottomButtonComponentViewModelProtocol>

@property (retain, nonatomic) AWECommonButtonInfoModel *infoModel;
@property (weak, nonatomic) AWEPlayInteractionContext *context;
@property (weak, nonatomic) id<AWEPlayInteractionBottomButtonComponentProtocol> component;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowButtonForModel:(id)a0 context:(id)a1;
+ (BOOL)shouldShowInLiveStatusForModel:(id)a0 context:(id)a1;

- (long long)activateType;
- (id)initWithInfoModel:(id)a0 context:(id)a1 component:(id)a2;
- (void)didClickView:(id)a0 atPosition:(long long)a1 withModel:(id)a2;
- (void)bindEvent;
- (void)subscribedLiveStatusChange:(id)a0;
- (void)removeEvent;
- (void).cxx_destruct;
- (void)dealloc;

@end
