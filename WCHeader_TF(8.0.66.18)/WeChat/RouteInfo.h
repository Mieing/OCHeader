@class Dialog, NSString, ActionSheetViewData, TinyAppUri, FinderUri, ControlInfo, LiteAppOpenInfo, RetryExtraParam, CustomModal, NSMutableArray, HalfPageTipsViewData;

@interface RouteInfo : WXPBGeneratedMessage

@property (nonatomic) int type;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) TinyAppUri *tinyAppUri;
@property (retain, nonatomic) Dialog *dialog;
@property (nonatomic) unsigned int subpageIndex;
@property (nonatomic) BOOL isIntercepted;
@property (retain, nonatomic) NSMutableArray *action;
@property (retain, nonatomic) CustomModal *modal;
@property (retain, nonatomic) ActionSheetViewData *actionSheet;
@property (retain, nonatomic) RetryExtraParam *retryExtraParam;
@property (retain, nonatomic) HalfPageTipsViewData *halfPageTips;
@property (retain, nonatomic) ControlInfo *backControlInfo;
@property (retain, nonatomic) FinderUri *finderUri;
@property (retain, nonatomic) NSString *routeContext;
@property (retain, nonatomic) LiteAppOpenInfo *liteAppOpenInfo;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;
+ (void)initialize;

@end
