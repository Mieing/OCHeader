@class HTSEventContext, NSString, NSArray, IESLivePublicScreenNodeStyleConfig, IESLivePublicScreenInfoModel, IESLivePublicScreenNotificationCenter, IESLivePublicScreenDataFlowConfig, IESLiveComponentContext;
@protocol IESLivePSAttachmentService, IESLiveRoomService, IESLivePublicScreenMonitorProtocol;

@interface IESLivePublicScreenContext : NSObject

@property (weak, nonatomic) id<IESLivePSAttachmentService> attachmentService;
@property (weak, nonatomic) IESLivePublicScreenNotificationCenter *notifyCenter;
@property (retain, nonatomic) IESLivePublicScreenInfoModel *infoModel;
@property (copy, nonatomic) NSString *currentUserID;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (retain, nonatomic) id<IESLivePublicScreenMonitorProtocol> publicScreenMonitor;
@property (copy, nonatomic) NSArray *configAttachments;
@property (retain, nonatomic) IESLivePublicScreenNodeStyleConfig *nodeStyleConfig;
@property (retain, nonatomic) IESLivePublicScreenDataFlowConfig *dataFlowConfig;
@property (nonatomic) BOOL disableUnreadMessageTipView;

- (void)bindAttachmentService:(id)a0;
- (id)availableDataFlowAttachments;
- (id)availableAttachments;
- (void)bindNotificationCenter:(id)a0;
- (void).cxx_destruct;

@end
