@class HTSEventContext, NSArray, NSString, IESLiveComponentContext;
@protocol IESLiveRoomService;

@interface IESLiveUnionLiveInfoModel : NSObject

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (retain, nonatomic) NSArray *guestAnchorsArray;
@property (copy, nonatomic) NSString *userListPanelSchema;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) unsigned long long unionLiveType;
@property (nonatomic) BOOL canShowGroupListPanel;

- (void)didUpdateRoom:(id)a0;
- (id)initWithRoom:(id)a0 trackContext:(id)a1 componentContext:(id)a2;
- (void)didUpdateMessage:(id)a0;
- (id)unionLiveUserListPanelSchema;
- (void)updateGuestAnchorsArrayWithUserArray:(id)a0;
- (id)groupLiveUserListPanelSchema:(id)a0;
- (void)closeTogetherLive;
- (void).cxx_destruct;

@end
