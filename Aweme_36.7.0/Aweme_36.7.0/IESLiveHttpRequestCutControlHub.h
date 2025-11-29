@class NSMutableDictionary;

@interface IESLiveHttpRequestCutControlHub : NSObject

@property (retain, nonatomic) NSMutableDictionary *cutConfigInfo;
@property (retain, nonatomic) NSMutableDictionary *blockBodyConfig;
@property (nonatomic) BOOL requestCutEnable;

+ (id)controlHub;

- (void)initialConfig;
- (void)customFilterWithRequest:(id)a0;
- (id)filterBodyWithURL:(id)a0 params:(id)a1;
- (id)_liveNetWorkRequestCutConfig;
- (id)_pathWithURL:(id)a0;
- (id)_queryDictionaryWithURL:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
