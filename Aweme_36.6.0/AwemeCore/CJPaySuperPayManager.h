@class NSDictionary, CJPaySuperPayController, NSString;

@interface CJPaySuperPayManager : NSObject <CJPaySuperPayService>

@property (retain, nonatomic) CJPaySuperPayController *homePageVC;
@property (nonatomic) unsigned long long channelType;
@property (copy, nonatomic) NSDictionary *dataDict;
@property (copy, nonatomic) NSDictionary *trackParam;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) NSDictionary *queryResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerComponents;
+ (BOOL)isAvailableUse;
+ (id)defaultService;

- (BOOL)canProcessWithURL:(id)a0;
- (BOOL)wakeByUniversalPayDesk:(id)a0 withDelegate:(id)a1;
- (void)payActionWithDataDict:(id)a0 completionBlock:(id /* block */)a1;
- (void)i_openSuperPayWithParams:(id)a0 delegate:(id)a1;
- (void)exeCompletionBlock:(unsigned long long)a0 resultType:(unsigned long long)a1 response:(id)a2;
- (id)getQueryResultData;
- (void).cxx_destruct;
- (BOOL)isInstalled;
- (id)init;

@end
