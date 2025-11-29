@class ChatRoomInvitationWrap, NSArray, NSString, CMessageWrap;

@interface ChatRoomInvitationDetail : NSObject <PBCoding, WCTColumnCoding>

@property (retain, nonatomic) CMessageWrap *msgWrap;
@property (weak, nonatomic) ChatRoomInvitationWrap *invitationWrap;
@property (retain, nonatomic) NSArray *invitationReasonList;
@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) NSString *roomUsrName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_invitationReasonList;
+ (void)PBArrayAdd_content;
+ (void)PBArrayAdd_roomUsrName;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnType;

- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (long long)getSvrId;
- (void).cxx_destruct;

@end
