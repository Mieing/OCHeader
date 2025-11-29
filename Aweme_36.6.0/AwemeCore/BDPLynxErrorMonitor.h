@class BDPLynxProductInfo;

@interface BDPLynxErrorMonitor : NSObject

@property (retain, nonatomic) BDPLynxProductInfo *productInfo;

- (void)modifyJsonObject:(id)a0;
- (void)sendDataToServer:(id)a0;
- (void)reportError:(id)a0 extra:(id)a1;
- (void).cxx_destruct;
- (id)initWithProductInfo:(id)a0;

@end
