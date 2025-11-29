@class NSDictionary, NSArray;

@interface IRISDataPriorityFilter : NSObject

@property (retain, nonatomic) NSDictionary *config;
@property (nonatomic) BOOL strict;
@property (readonly) NSArray *supportedDataTypes;

+ (id)filterWithConfiguration:(id)a0;

- (id)eventList;
- (id)paramKeys;
- (id)v3Filter;
- (BOOL)_isArray:(id)a0 containArray:(id)a1;
- (id)paramKeysAndValues;
- (BOOL)_isDictionary:(id)a0 containDictionary:(id)a1;
- (BOOL)_matchEvent:(id)a0;
- (BOOL)_matchParamKeys:(id)a0 parameter:(id)a1;
- (BOOL)_matchParamKeysAndValues:(id)a0 parameter:(id)a1;
- (BOOL)isBool:(id)a0;
- (BOOL)isDataMatches:(id)a0 json:(id)a1;
- (void).cxx_destruct;
- (id)description;

@end
