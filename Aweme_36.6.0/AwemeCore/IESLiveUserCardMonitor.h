@class NSMutableDictionary;
@protocol IESLiveFullLinkMonitor;

@interface IESLiveUserCardMonitor : NSObject

@property (retain, nonatomic) NSMutableDictionary *monitorDict;
@property (retain, nonatomic) id<IESLiveFullLinkMonitor> innerMonitor;

- (void)reportEvent:(id)a0 category:(id)a1 metric:(id)a2 extra:(id)a3;
- (void)addDict:(id)a0;
- (void)trackUpload;
- (void)setString:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)setNumber:(id)a0 forKey:(id)a1;
- (void)clearAllData;

@end
