@class NSString, NSMutableDictionary;

@interface CgiReportItemConfiger : NSObject <IOnCgiReportItemControl>

@property (retain, nonatomic) NSMutableDictionary *confsMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)getItemConfsVersion:(unsigned int)a0;
+ (id)itemConfsMmkvMapID;
+ (id)itemDataMmkvMapID;

- (id)init;
- (void)reset;
- (void)registerExtension;
- (void)unRegisterExtension;
- (BOOL)checkNeedControl:(id)a0 andCgiBizId:(unsigned int)a1;
- (void)readConfsFromMMkv;
- (void)readConfsFromMMkv:(unsigned int)a0;
- (void)onCgiReportItemControl:(unsigned int)a0 andVersion:(unsigned long long)a1 andConfigs:(id)a2;
- (void).cxx_destruct;

@end
