@class IESIMChatSettingsComponentContext, NSString, UIImage, AWEIMGroupMemberListModel;

@interface AWEIMGroupParticipantCellViewModel : NSObject <IESIMGroupSettingParticipantVMProtocol>

@property (retain, nonatomic) AWEIMGroupMemberListModel *model;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *collectionViewCellIdentifier;
@property (retain, nonatomic) IESIMChatSettingsComponentContext *context;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) BOOL isSHL;
@property (readonly, nonatomic) UIImage *avatarImage;
@property (readonly, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onClick;
- (id)addObserverForKeyPath:(id)a0 options:(unsigned long long)a1 task:(id /* block */)a2;
- (void)removeAllBlockObservers;
- (struct CGSize { double x0; double x1; })sizeOfPerItem;
- (id)initWithModel:(id)a0 context:(id)a1 size:(struct CGSize { double x0; double x1; })a2;
- (void)fetchBusinessDataForMember;
- (void)configAdminBusinessData;
- (void)p_updateAvatarImage;
- (void)doInviteJoinGroupAction;
- (void)doRemoveMemberGroupAction;
- (void).cxx_destruct;
- (void)dealloc;
- (id)cellIdentifier;
- (void)updateDisplayName;

@end
