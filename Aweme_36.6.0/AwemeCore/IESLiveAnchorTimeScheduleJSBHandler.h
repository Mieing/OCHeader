@class NSString;
@protocol IESLiveAnnouncementService, IESLivePiperProtocol;

@interface IESLiveAnchorTimeScheduleJSBHandler : NSObject <IESLivePiperHandlerProtocol>

@property (retain, nonatomic) id<IESLiveAnnouncementService> announcementService;
@property (weak, nonatomic) id<IESLivePiperProtocol> piper;
@property (nonatomic) BOOL shouldLazyCreateCallHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
