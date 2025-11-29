@class NSString, NSMutableDictionary;
@protocol IESLiveRoomService;

@interface IESLiveChatChannelSwitchCenter : NSObject <IESLiveChatTabService>

@property (nonatomic) BOOL enableChatChannel;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) NSMutableDictionary *settingModels;
@property (nonatomic) BOOL hasReportedEnable;
@property (nonatomic) BOOL enableChat;
@property (nonatomic) unsigned long long chatChannelStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)messageChannelEnableExtentHeight;
- (BOOL)messageChannelHideAnimationEffect;
- (BOOL)canCreateChatChannel;
- (id)settingModelWithChannelID:(id)a0;
- (void)updateSettingModel:(id)a0 withChannelID:(id)a1;
- (void)assignChatAuth:(BOOL)a0;
- (BOOL)enableShowGreetStatus;
- (BOOL)canShowTabEntranceWhileEnterRoom;
- (void)clearAllSettingModels;
- (BOOL)isPadHorizonalEnter;
- (BOOL)enableChatChannelLandscape;
- (BOOL)enableChatChannelLandscapeToolbarInvite;
- (BOOL)canShowTabEntrance;
- (void)addSettingModel:(id)a0 withChannelID:(id)a1;
- (void)removeSettingModelWithChannelID:(id)a0;
- (BOOL)messageChannelClearGfitAnimationEffect;
- (BOOL)hasChatChannelInfo;
- (id)messageChannelRoomList;
- (BOOL)canShowTabPullAction;
- (void).cxx_destruct;
- (id)initWithRoom:(id)a0;
- (void)refreshStatus;

@end
