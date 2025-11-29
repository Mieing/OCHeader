@class TempoMethodManager, NSString, TempoVariableZone, _TtC8TempoiOS11TempoEngine, NSMutableDictionary, _TtC8TempoiOS13TempoRootView, _TtC8TempoiOS10TempoLoger, _TtC8TempoiOS13TempoFullTree, TempoEventCenter, NSDictionary, TempoCardTiming;

@interface TempoMethodContext : NSObject

@property (retain, nonatomic) NSMutableDictionary *mGlobalData;
@property (nonatomic) BOOL onLoaded;
@property (nonatomic) BOOL onOffloaded;
@property (copy, nonatomic) NSString *uniqueID;
@property (weak, nonatomic) _TtC8TempoiOS11TempoEngine *engine;
@property (copy, nonatomic) NSString *url;
@property (retain, nonatomic) _TtC8TempoiOS10TempoLoger *loger;
@property (copy, nonatomic) NSString *sfcScript;
@property (retain, nonatomic) _TtC8TempoiOS13TempoFullTree *fullTree;
@property (weak, nonatomic) _TtC8TempoiOS13TempoRootView *rootView;
@property (nonatomic) BOOL buildingFirstFullTree;
@property (retain, nonatomic) TempoCardTiming *timingObj;
@property (readonly, nonatomic) TempoEventCenter *eventCenter;
@property (nonatomic) struct CGSize { double width; double height; } constrainedSize;
@property (readonly, nonatomic) NSDictionary *globalData;
@property (readonly, nonatomic) TempoVariableZone *topZone;
@property (readonly, nonatomic) TempoMethodManager *methodManager;

- (void)onOffload;
- (void)mergeIntoGlobalDataWithData:(id)a0;
- (id)initWithMethodManager:(id)a0 data:(id)a1;
- (BOOL)assignVariable:(id)a0 value:(id)a1;
- (void)pushVariableZone;
- (void)popVariableZone;
- (void).cxx_destruct;
- (void)executeFunction:(id)a0;
- (void)onLoad;
- (id)variableForName:(id)a0;

@end
