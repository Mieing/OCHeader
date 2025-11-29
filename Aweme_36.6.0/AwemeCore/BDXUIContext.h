@class BDXIPadAdapteConfig;

@interface BDXUIContext : BDXSubContext

@property (retain, nonatomic) BDXIPadAdapteConfig *iPadConfig;
@property (copy, nonatomic) id /* block */ calcInitialFrameBlock;
@property (copy, nonatomic) id /* block */ calcFinalFrameBlock;
@property (copy, nonatomic) id /* block */ customOrientation;

- (void)mergeContext:(id)a0 shouldOverride:(BOOL)a1;
- (void).cxx_destruct;

@end
