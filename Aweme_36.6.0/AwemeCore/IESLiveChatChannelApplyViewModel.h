@class HTSEventContext, RoomChannelInfo, HTSLiveApi, NSDictionary;
@protocol IESLiveRoomService;

@interface IESLiveChatChannelApplyViewModel : NSObject

@property (retain, nonatomic) RoomChannelInfo *channelInfo;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) HTSLiveApi *applyApi;
@property (retain, nonatomic) NSDictionary *settings;

+ (id)attributedStringWithIcon:(id)a0 text:(id)a1 font:(id)a2 textColor:(id)a3;

- (void)applyChannelWithRoomID:(id)a0 channelID:(id)a1 fansChannelType:(id)a2 groupID:(id)a3 completion:(id /* block */)a4;
- (void)trackClickApplyMessage;
- (id)initWithChannelInfo:(id)a0 room:(id)a1 trackContext:(id)a2;
- (void)openApplyLandingView;
- (id)applyGuideMessageString;
- (void).cxx_destruct;

@end
