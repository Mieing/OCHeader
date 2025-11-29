@class NSError;

@interface LunaSettleResult : NSObject

@property (nonatomic) long long purchResult;
@property (retain, nonatomic) NSError *cyPurchError;

+ (id)resultWith:(long long)a0 cyPurchError:(id)a1;

- (void).cxx_destruct;

@end
