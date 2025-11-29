@class NSString;

@interface AWEPzStrategyVerifyResultModel : NSObject <AWEPzStrategyVerifyResultProtocol>

@property (nonatomic) BOOL success;
@property (nonatomic) long long verifyResult;
@property (copy, nonatomic) NSString *hitStrategyType;
@property (copy, nonatomic) NSString *hitStrategyID;
@property (copy, nonatomic) NSString *errorDesc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)generateWithVerifyResult:(long long)a0 hitStrategyType:(id)a1 hitStrategyID:(id)a2 errorDesc:(id)a3;

- (void).cxx_destruct;

@end
