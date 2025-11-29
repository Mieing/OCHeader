@class NSMutableDictionary;

@interface AWEPOICardPerfEventBuilder : NSObject

@property (retain, nonatomic) NSMutableDictionary *params;

- (id)appendExtraParams:(id)a0;
- (id)createCardComponent:(id)a0;
- (id)preCartStart:(id)a0;
- (id)templateParse:(id)a0;
- (id)templateRender:(id)a0;
- (id)viewBind:(id)a0;
- (id)viewRender:(id)a0;
- (id)totalSizeChange:(id)a0;
- (id)cardFcpFromOpenPage:(id)a0;
- (id)isAfterFmp:(BOOL)a0;
- (id)cardKey:(id)a0;
- (id)setParamForKey:(id)a0 value:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)total:(id)a0;

@end
