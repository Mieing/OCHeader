@class NSString, BTBaseBarItemView, CContact;

@interface BTBrandBarItemViewModel : NSObject <IContactMgrExt, BrandTimelineMsgMgrExt, BTBarItemViewModelProtocol>

@property (readonly, nonatomic) NSString *username;
@property (readonly, nonatomic) NSString *headImgUrl;
@property (readonly, nonatomic) NSString *nickName;
@property (readonly, nonatomic) BOOL hasGreenDot;
@property (readonly, nonatomic) BOOL hasArrow;
@property (readonly, nonatomic) BOOL hasNewFinderLiving;
@property (readonly, nonatomic) BOOL isBrandLiving;
@property (nonatomic) BOOL hasLine;
@property (weak, nonatomic) BTBaseBarItemView *barItemView;
@property (retain, nonatomic) CContact *contact;
@property (nonatomic) BOOL isLiveForcePreposed;
@property (readonly, nonatomic) unsigned long long greenDotType;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) BOOL isFinder;
@property (readonly, nonatomic) BOOL isMember;
@property (readonly, nonatomic) BOOL hasNewMemberContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)itemViewClassName;

- (id)init;
- (id)contactData;
- (void)onModifyContact:(id)a0;
- (void)onUpdateOftenReadContactByEnterSession:(id)a0;
- (void)onUpdateOftenReadContactByEnterProfile:(id)a0;
- (void)onUpdateOftenReadContactByExposeFlowListItemCellWithUserName:(id)a0;
- (void)onUpdateOftenReadContactByEnterFinderMember:(id)a0;
- (void)onUpdateOftenReadContactByOpenLive:(id)a0;
- (void).cxx_destruct;

@end
