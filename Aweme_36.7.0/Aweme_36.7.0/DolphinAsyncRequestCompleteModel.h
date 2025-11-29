@class NSArray, NSDictionary, NSError, DolphinMemoryCacheModelContext;

@interface DolphinAsyncRequestCompleteModel : NSObject

@property (nonatomic) BOOL didRequest;
@property (nonatomic) BOOL requestResult;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) BOOL countAsFail;
@property (copy, nonatomic) NSArray *asyncAds;
@property (nonatomic) BOOL insertCache;
@property (retain, nonatomic) DolphinMemoryCacheModelContext *cacheContext;
@property (nonatomic) BOOL callBackRerank;
@property (copy, nonatomic) NSDictionary *callBackParams;
@property (nonatomic) long long callBackTriggerSource;
@property (copy, nonatomic) NSDictionary *trackParams;

- (void).cxx_destruct;

@end
