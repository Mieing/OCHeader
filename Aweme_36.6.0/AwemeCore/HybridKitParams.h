@class HybridContext;

@interface HybridKitParams : NSObject

@property (retain, nonatomic) id globalProps;
@property (retain, nonatomic) HybridContext *context;

- (void).cxx_destruct;

@end
