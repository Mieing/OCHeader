@class NSMutableDictionary, MMLiteAppInfoItem, NSString, JSEvent, NSArray;

@interface WebviewJSEventHandler_openLiteApp : WebviewJSEventHandlerBase <MMLiteAppExt>

@property (nonatomic) BOOL syncCheckUpdate;
@property (retain, nonatomic) NSMutableDictionary *resultParam;
@property (retain, nonatomic) JSEvent *jsEvent;
@property (retain, nonatomic) MMLiteAppInfoItem *appInfo;
@property (retain, nonatomic) NSString *page;
@property (retain, nonatomic) NSString *query;
@property (retain, nonatomic) NSString *appId;
@property (nonatomic) BOOL isHalfScreen;
@property (nonatomic) BOOL enableDragToCloseInHalfScreen;
@property (nonatomic) BOOL enableDragToFullScreenInHalfScreen;
@property (retain, nonatomic) NSString *enterType;
@property (nonatomic) float heightPercent;
@property (nonatomic) BOOL isTransparent;
@property (nonatomic) BOOL isForbidRightGesture;
@property (nonatomic) double delayTime;
@property (retain, nonatomic) NSArray *enableActions;
@property (retain, nonatomic) NSArray *enableViews;
@property (nonatomic) BOOL isRedirect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)callbackJSEvent:(id)a0;
- (void).cxx_destruct;

@end
