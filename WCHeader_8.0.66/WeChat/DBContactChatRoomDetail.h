@class NSString;

@interface DBContactChatRoomDetail : NSObject <PBCoding>

@property (nonatomic) unsigned int chatRoomInfoVersion;
@property (nonatomic) unsigned int chatRoomInfoSvrVersion;
@property (retain, nonatomic) NSString *chatRoomDesc;
@property (retain, nonatomic) NSString *chatRoomDescModer;
@property (nonatomic) unsigned long long chatRoomDescTime;
@property (nonatomic) unsigned int chatRoomStatus;
@property (nonatomic) unsigned int chatRoomLocalInfoVersion;
@property (retain, nonatomic) NSString *chatRoomAssociateOpenIMRoomName;
@property (nonatomic) BOOL chatRoomDescBannerNotShow;
@property (nonatomic) unsigned int chatRoomSpamStatus;
@property (retain, nonatomic) NSString *richChatRoomDesc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_chatRoomInfoVersion;
+ (void)PBArrayAdd_chatRoomInfoSvrVersion;
+ (void)PBArrayAdd_chatRoomDesc;
+ (void)PBArrayAdd_chatRoomDescModer;
+ (void)PBArrayAdd_chatRoomDescTime;
+ (void)PBArrayAdd_chatRoomStatus;
+ (void)PBArrayAdd_chatRoomLocalInfoVersion;
+ (void)PBArrayAdd_chatRoomAssociateOpenIMRoomName;
+ (void)PBArrayAdd_chatRoomDescBannerNotShow;
+ (void)PBArrayAdd_chatRoomSpamStatus;
+ (void)PBArrayAdd_richChatRoomDesc;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
