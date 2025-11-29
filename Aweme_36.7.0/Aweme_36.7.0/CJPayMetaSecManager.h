@class NSString;
@protocol CJMetaSecDelegate;

@interface CJPayMetaSecManager : NSObject <CJPayMetaSecService>

@property (retain, nonatomic) id<CJMetaSecDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerProtocol;
+ (id)defaultService;

- (void)registerScenePageNameCallback:(long long)a0 cb:(id)a1;
- (void)reportForScene:(id)a0;
- (void)i_registerMetaSecDelegate:(id)a0;
- (void)reportForSceneType:(long long)a0;
- (void).cxx_destruct;

@end
