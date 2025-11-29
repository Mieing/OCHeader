@class AWEECOMIMMsgFoldConfig, NSMutableDictionary;

@interface AWEECOMIMMsgFoldFinalConfig : NSObject

@property (retain, nonatomic) AWEECOMIMMsgFoldConfig *fallbackConfig;
@property (retain, nonatomic) AWEECOMIMMsgFoldConfig *serverConfig;
@property (retain, nonatomic) NSMutableDictionary *foldGroupConfigMap;

- (id)foldGroupConfigWithFoldGroupKey:(id)a0;
- (id)initWithFallbackConfig:(id)a0 serverConfig:(id)a1;
- (void)generateFoldGroupConfigWithFoldGroupKey:(id)a0;
- (void).cxx_destruct;

@end
