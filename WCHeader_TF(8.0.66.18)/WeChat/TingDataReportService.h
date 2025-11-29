@interface TingDataReportService : NSObject

+ (id)getTing28683Params:(unsigned long long)a0;
+ (id)getExploreSessionsContext:(unsigned long long)a0;
+ (id)jsonString2Dictionary:(id)a0;

- (id)getExploreSessionsContext:(unsigned long long)a0 params:(id)a1 activeSessionExtInfo:(id)a2 activeSessionExtInfo2:(id)a3;
- (unsigned long long)getUint64Params:(id)a0 key:(id)a1;
- (unsigned int)getUint32Params:(id)a0 key:(id)a1;
- (id)getStringParams:(id)a0 key:(id)a1;

@end
