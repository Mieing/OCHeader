@class NSArray, IESIMChatSettingsComponentContext, NSString;

@interface AWEIMGroupParticipantsViewModel : NSObject <IESIMGroupSettingParticipantsServiceProtocol>

@property (retain, nonatomic) IESIMChatSettingsComponentContext *context;
@property (retain, nonatomic) NSArray *memberArray;
@property (retain, nonatomic) NSArray *viewModels;
@property (copy, nonatomic) NSString *rightTitle;
@property (nonatomic) long long itemCountPerLine;
@property (retain, nonatomic) NSArray *shlArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onClick;
- (id)addObserverForKeyPath:(id)a0 options:(unsigned long long)a1 task:(id /* block */)a2;
- (void)removeAllBlockObservers;
- (struct CGSize { double x0; double x1; })sizeOfPerItem;
- (void)refreshViewModels;
- (id)fetchSHL;
- (void)addKVO;
- (void)calculateItemCountPerLine;
- (id)prepareGroupListDataWith:(id)a0;
- (id)manageGroupListDataWith:(id)a0;
- (void)makeSHLArrayRight:(id)a0;
- (long long)maxVMCount;
- (id)transferFromParticipant:(id)a0 joinPriority:(unsigned long long)a1;
- (BOOL)enableInvite;
- (void)showGroupMemberList;
- (id)prepareSHLInvitedUserDataWith:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)dealloc;
- (void)updateTitle;
- (double)viewHeight;

@end
