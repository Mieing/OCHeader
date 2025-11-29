@class NSString, DBContactChatRoomDetail;

@interface DBContactChatRoom : NSObject <PBCoding, WCTColumnCoding>

@property (retain, nonatomic) NSString *chatRoomMember;
@property (retain, nonatomic) NSString *owner;
@property (nonatomic) unsigned int chatStatus;
@property (nonatomic) unsigned int chatRoomMaxCount;
@property (nonatomic) unsigned int chatRoomVersion;
@property (retain, nonatomic) NSString *chatRoomData;
@property (retain, nonatomic) DBContactChatRoomDetail *chatRoomDetail;
@property (nonatomic) unsigned int chatRoomAccessType;
@property (retain, nonatomic) NSString *chatRoomAdmin;
@property (nonatomic) unsigned long long chatRoomBusinessType;
@property (nonatomic) unsigned int chatRoomLocalSendUpgradeType;
@property (retain, nonatomic) NSString *chatRoomSpecialAttentionMem;
@property (nonatomic) unsigned int inChatRoomStatus;
@property (nonatomic) unsigned int chatRoomQRCodeAccessType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_chatRoomMember;
+ (void)PBArrayAdd_owner;
+ (void)PBArrayAdd_chatStatus;
+ (void)PBArrayAdd_chatRoomMaxCount;
+ (void)PBArrayAdd_chatRoomVersion;
+ (void)PBArrayAdd_chatRoomData;
+ (void)PBArrayAdd_chatRoomDetail;
+ (void)PBArrayAdd_chatRoomAccessType;
+ (void)PBArrayAdd_chatRoomAdmin;
+ (void)PBArrayAdd_chatRoomBusinessType;
+ (void)PBArrayAdd_chatRoomLocalSendUpgradeType;
+ (void)PBArrayAdd_chatRoomSpecialAttentionMem;
+ (void)PBArrayAdd_inChatRoomStatus;
+ (void)PBArrayAdd_chatRoomQRCodeAccessType;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnType;

- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (void).cxx_destruct;

@end
