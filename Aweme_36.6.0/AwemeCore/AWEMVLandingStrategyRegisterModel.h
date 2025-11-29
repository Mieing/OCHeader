@class NSString;

@interface AWEMVLandingStrategyRegisterModel : NSObject <AWEMVLandingStrategyRegisterModelProtocol>

@property (nonatomic) unsigned long long priority;
@property (copy, nonatomic) id /* block */ shouldActiveBlock;
@property (copy, nonatomic) id /* block */ configStrategyBlock;
@property (copy, nonatomic) id /* block */ activeBlock;
@property (copy, nonatomic) id /* block */ notActiveBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
