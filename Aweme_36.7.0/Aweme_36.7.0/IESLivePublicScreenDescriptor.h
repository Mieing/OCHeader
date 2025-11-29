@class HTSEventContext, IESLivePublicScreenViewModel, NSArray, IESLivePublicScreenNodeStyleConfig, NSString, IESLivePublicScreenInfoModel, IESLivePublicScreenDataFlowConfig, IESLiveComponentContext;
@protocol IESLiveRoomService, IESLivePublicScreenMonitorProtocol;

@interface IESLivePublicScreenDescriptor : NSObject

@property (retain, nonatomic) IESLivePublicScreenInfoModel *infoModel;
@property (retain, nonatomic) IESLivePublicScreenViewModel *viewModel;
@property (retain, nonatomic) IESLivePublicScreenDataFlowConfig *dataFlowConfig;
@property (retain, nonatomic) IESLivePublicScreenNodeStyleConfig *nodeStyleConfig;
@property (retain, nonatomic) id<IESLivePublicScreenMonitorProtocol> publicScreenMonitor;
@property (copy, nonatomic) NSArray *configAttachments;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (copy, nonatomic) NSString *currentUserID;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (nonatomic) BOOL disableUnreadMessageTipView;

- (id)initWithPublicScreenInfo:(id)a0 viewModel:(id)a1 diContext:(id)a2;
- (id)transformToPublicScreenContext;
- (id)initWithPublicScreenInfo:(id)a0 dataFlowConfig:(id)a1 nodeStyleConfig:(id)a2 diContext:(id)a3;
- (void).cxx_destruct;

@end
