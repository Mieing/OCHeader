@class NSMutableDictionary;

@interface MMLiveReportFieldTable : NSObject

@property (retain, nonatomic) NSMutableDictionary *fieldDict;
@property (nonatomic) Class reportHandlerClass;

+ (void)addFieldWidthTable:(id)a0 withClass:(Class)a1 forFieldName:(id)a2 forFieldIndex:(unsigned int)a3;

- (id)init;
- (id)fieldsSortByIndex;
- (id)serializeAsLogString:(id)a0;
- (void).cxx_destruct;

@end
