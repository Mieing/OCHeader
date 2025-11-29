@class NSNumber, NSMapTable, HTSLiveExpandToolbarItem, IESLiveComponentContext, NSMutableArray, IESLiveAudienceMoreToolsApi;
@protocol IESLiveURLSchemaHandler;

@interface IESLiveMoreToolsDataManager : NSObject

@property (retain, nonatomic) IESLiveAudienceMoreToolsApi *api;
@property (retain, nonatomic) NSMutableArray *mainAreaDataArray;
@property (retain, nonatomic) NSMapTable *registerHandler;
@property (retain, nonatomic) id<IESLiveURLSchemaHandler> schemaHandler;
@property (retain, nonatomic) NSMutableArray *mainAreaWhiteList;
@property (retain, nonatomic) NSMutableArray *mainAreaColumnDataList;
@property (nonatomic) BOOL isNeedTrackPanelDiff;
@property (nonatomic) BOOL used;
@property (retain, nonatomic) NSNumber *roomId;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (retain, nonatomic) HTSLiveExpandToolbarItem *toolbarItem;
@property (retain, nonatomic) HTSLiveExpandToolbarItem *landscapeToolbarItem;

- (void)registerHandlerWithItemType:(int)a0 handler:(id)a1;
- (id)initWithRoomId:(id)a0;
- (void)triggerMainAreaRequest:(BOOL)a0 completion:(id /* block */)a1;
- (id)getDynamicMoreToolsDataArray:(BOOL)a0;
- (BOOL)subscribeBackEndDataWithPreload:(BOOL)a0 completion:(id /* block */)a1;
- (void)realFetchMorePanel:(BOOL)a0 completion:(id /* block */)a1;
- (BOOL)canHaveAccessToPlayModePanel;
- (void)dealMorePanelWithResponse:(id)a0 error:(id)a1 completion:(id /* block */)a2 occasion:(BOOL)a3 commonParamStr:(id)a4;
- (id)updateCompatibleItemByWidgetData:(id)a0 scene:(BOOL)a1;
- (void)createConfidentItemByWidgetData:(id)a0 scene:(BOOL)a1 completion:(id /* block */)a2;
- (id)createDynamicItemByWidgetData:(id)a0;
- (void)trackMorePanelDiff:(id)a0;
- (id)createMainAreaListByWhiteList:(BOOL)a0;
- (void).cxx_destruct;

@end
