@class NSString, CameraScanGoodsItemExchangeInfo;

@interface GoodsReqRemoteDetectTask : NSObject

@property (copy, nonatomic) NSString *reqKey;
@property (nonatomic) unsigned long long retryCount;
@property (retain, nonatomic) CameraScanGoodsItemExchangeInfo *exchangeInfo;

- (void).cxx_destruct;

@end
