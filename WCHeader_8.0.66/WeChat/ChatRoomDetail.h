@class NSString;

@interface ChatRoomDetail : NSObject <PBCoding, NSCoding>

@property (nonatomic) unsigned int m_uiChatRoomInfoVersion;
@property (nonatomic) unsigned int m_uiChatRoomInfoSvrVersion;
@property (retain, nonatomic) NSString *m_nsChatRoomDesc;
@property (retain, nonatomic) NSString *m_nsChatRoomDescModer;
@property (nonatomic) unsigned long long m_uiChatRoomDescTime;
@property (nonatomic) BOOL m_bChatRoomDescReaded;
@property (nonatomic) BOOL m_bChatRoomDescBannerNotShow;
@property (nonatomic) unsigned int m_uiChatRoomStatus;
@property (nonatomic) unsigned int m_uiLocalInfoVersion;
@property (retain, nonatomic) NSString *m_nsAssociateOpenIMRoomName;
@property (nonatomic) unsigned int m_uiChatRoomSpamStatus;
@property (retain, nonatomic) NSString *richChatRoomDesc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_m_uiChatRoomInfoVersion;
+ (void)PBArrayAdd_m_uiChatRoomInfoSvrVersion;
+ (void)PBArrayAdd_m_nsChatRoomDesc;
+ (void)PBArrayAdd_m_nsChatRoomDescModer;
+ (void)PBArrayAdd_m_uiChatRoomDescTime;
+ (void)PBArrayAdd_m_bChatRoomDescReaded;
+ (void)PBArrayAdd_m_uiChatRoomStatus;
+ (void)PBArrayAdd_m_uiLocalInfoVersion;
+ (void)PBArrayAdd_m_nsAssociateOpenIMRoomName;
+ (void)PBArrayAdd_m_bChatRoomDescBannerNotShow;
+ (void)PBArrayAdd_m_uiChatRoomSpamStatus;
+ (void)PBArrayAdd_richChatRoomDesc;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEmptyDesc;
- (void).cxx_destruct;

@end
