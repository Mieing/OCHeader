@class ChatBotVoIPRoomInfo, NSMutableArray, NSString;
@protocol ChatBotDiscoverDataLogicDelegate;

@interface ChatBotDiscoverDataLogic : NSObject <IChatBotVoIPRoomInfoExt>

@property (retain, nonatomic) NSMutableArray *roomInfoList;
@property (retain, nonatomic) ChatBotVoIPRoomInfo *curSelectedRoomInfo;
@property (weak, nonatomic) id<ChatBotDiscoverDataLogicDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getMultiChatBotUsernameListForRoom:(id)a0;
+ (BOOL)isMultiChatBotRoom:(id)a0;

- (id)initWithSelectedRoom:(id)a0;
- (void)updateData;
- (BOOL)isSelectedWithIndex:(unsigned long long)a0;
- (BOOL)isSelectedWithRoomInfo:(id)a0;
- (void)updateSelectedRoomInfoWithIndex:(unsigned long long)a0;
- (void)updateSelectedRoomInfo:(id)a0;
- (unsigned long long)getDataCount;
- (id)getDataWithIndex:(unsigned long long)a0;
- (unsigned long long)curSelectedIndex;
- (void)updateRoomInfo:(id)a0;
- (void)onRoomInfoUpdate:(id)a0;
- (void).cxx_destruct;

@end
