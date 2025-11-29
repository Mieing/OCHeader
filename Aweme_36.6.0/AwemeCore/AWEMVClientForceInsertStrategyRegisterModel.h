@class NSString;
@protocol AWEMVClientForceInsertStrategyProtocol;

@interface AWEMVClientForceInsertStrategyRegisterModel : NSObject <AWEMVClientForceInsertStrategyRegisterModelProtocol>

@property (retain, nonatomic) Class strategyClass;
@property (retain, nonatomic) id<AWEMVClientForceInsertStrategyProtocol> strategyInstance;
@property (copy, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
