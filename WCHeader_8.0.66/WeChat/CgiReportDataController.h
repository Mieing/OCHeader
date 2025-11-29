@class NSMutableDictionary;

@interface CgiReportDataController : NSObject <IExptServiceExt>

@property (retain, nonatomic) NSMutableDictionary *controllMap;

- (id)init;
- (BOOL)checkCanReport:(unsigned int)a0 andItemId:(id)a1 andEventId:(id)a2;
- (void)initDefaultConfig;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)onExptItemListChange;
- (void)readExptConfig;
- (void).cxx_destruct;

@end
