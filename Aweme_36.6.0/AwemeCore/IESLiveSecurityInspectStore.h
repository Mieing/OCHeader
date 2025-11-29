@class NSArray, NSString, HTSEventContext, IESLiveComponentContext;
@protocol IESLiveRoomService;

@interface IESLiveSecurityInspectStore : NSObject <HTSLiveMessageSubscriber>

@property (retain, nonatomic) NSArray *urlList;
@property (retain, nonatomic) NSString *titleString;
@property (retain, nonatomic) NSString *subTitleString;
@property (nonatomic) long long foldDuration;
@property (nonatomic) long long displayDutation;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (nonatomic) BOOL showSecurityInspect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRoom:(id)a0 trackContext:(id)a1 componentContext:(id)a2;
- (void)handleMessage:(id)a0;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;
- (void)prepareForUse;

@end
