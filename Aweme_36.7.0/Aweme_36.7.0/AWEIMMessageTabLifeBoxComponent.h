@class NSString;
@protocol IESIMThirdPartyConvBoxManagerProtocol, AWEIMChatListBizCellInfoManagerInterface;

@interface AWEIMMessageTabLifeBoxComponent : AWEIMComponentBase <IESIMChatListBizCellInfoProtocol, IESIMThirdPartyConvBoxBizDelegate>

@property (weak, nonatomic) id<AWEIMChatListBizCellInfoManagerInterface> cellInfoManager;
@property (weak, nonatomic) id<IESIMThirdPartyConvBoxManagerProtocol> boxManager;
@property (nonatomic) BOOL didFinishLoadChatData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (id)sessionIDList;
- (BOOL)shouldStickOnTopByDefault;
- (BOOL)enableCustomUpdateCellInfo;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)p_updateCellInfoTypeByCustom:(long long)a0 withValue:(id)a1 forChat:(id)a2;
- (void)p_didFinishLoadChatData;
- (id)p_businessID;
- (id)p_sessionIDList;
- (BOOL)p_modifyChatModel:(id)a0 withCellInfo:(id)a1;
- (void)customLoadChatModel:(id)a0 withCellInfo:(id)a1;
- (void)didRemoveBoxEntrance:(id)a0 at:(double)a1;
- (void)didUpdateBoxEntrance:(id)a0 withStickOnTopState:(BOOL)a1;
- (void)didUpdateDataWithBoxEntrance:(id)a0;
- (id)chatListCellInfoForSession:(id)a0;
- (void).cxx_destruct;
- (id)businessID;

@end
