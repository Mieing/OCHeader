@class NSMutableDictionary, MMLiteAppInfoItem, JSJumpLiteappInfo, NSString, UIViewController;

@interface TextState3rdPartyLiteAppHandler : TextState3rdPartyBaseHandler

@property (retain, nonatomic) JSJumpLiteappInfo *jumpInfo;
@property (nonatomic) BOOL syncCheckUpdate;
@property (retain, nonatomic) NSMutableDictionary *resultParam;
@property (retain, nonatomic) MMLiteAppInfoItem *appInfo;
@property (retain, nonatomic) NSString *page;
@property (retain, nonatomic) NSString *query;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *enterType;
@property (nonatomic) BOOL isHalfScreen;
@property (nonatomic) float heightPercent;
@property (nonatomic) BOOL isTransparent;
@property (nonatomic) BOOL isOpenWithNewTab;
@property (nonatomic) BOOL isRedirect;
@property (nonatomic) BOOL isForbidRightGesture;
@property (nonatomic) double delayTime;
@property (weak, nonatomic) UIViewController *contextViewController;

- (id)initWithBuffer:(id)a0 keyBuffer:(id)a1;
- (unsigned int)type;
- (BOOL)doSourceActionWithViewController:(id)a0 scene:(unsigned int)a1;
- (void)onLiteAppUpdateFinish:(unsigned long long)a0 appId:(id)a1 appInfo:(id)a2;
- (void).cxx_destruct;

@end
