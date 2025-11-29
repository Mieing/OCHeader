@protocol BDSCBizAdapterProtocol;

@interface BDSCBizAdapter : NSObject

@property (class, readonly, nonatomic) id<BDSCBizAdapterProtocol> biz;

+ (void)registerBiz:(id)a0;

@end
