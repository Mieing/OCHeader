@protocol WCFinderQRCodeCgiDelegate;

@interface WCFinderQRCodeCgi : WCFinderBaseCgi

@property (weak, nonatomic) id<WCFinderQRCodeCgiDelegate> delegate;

+ (id)qrCodeForContact:(id)a0;
+ (id)qrCodeForFeedComment:(id)a0 commentId:(unsigned long long)a1;

- (id)init;
- (id)initWithRequest:(id)a0;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
