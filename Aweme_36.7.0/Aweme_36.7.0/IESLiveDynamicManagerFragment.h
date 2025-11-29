@class NSString, NSMutableDictionary;

@interface IESLiveDynamicManagerFragment : IESLiveRoomComponent <IESLiveDynamicManagerReaction, HTSLiveMessageSubscriber>

@property (retain, nonatomic) NSMutableDictionary *dynamicViews;
@property (retain, nonatomic) NSMutableDictionary *dsls;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)dynamicViewDidCreated:(id)a0 withDslInfo:(id)a1 size:(struct CGSize { double x0; double x1; })a2;
- (void)createDynamicViewWithDslArray:(id)a0;
- (void)handleMessage:(id)a0;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
