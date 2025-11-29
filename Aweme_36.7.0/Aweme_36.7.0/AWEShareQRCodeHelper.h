@class NSString;

@interface AWEShareQRCodeHelper : NSObject <AWEShareQRCodeHelper>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)saveAlbumWithImage:(id)a0 withCompletion:(id /* block */)a1;
+ (void)requestRoundQRCodeWithContext:(id)a0 completion:(id /* block */)a1;
+ (void)requestSquareQRCodeWithContext:(id)a0 completion:(id /* block */)a1;
+ (BOOL)shouldUseTikCodeWithType:(unsigned long long)a0;
+ (void)trackQRCodeImageRequestWithTimeCost:(double)a0 context:(id)a1 error:(id)a2;
+ (void)removeQRCodeCacheForItemID:(id)a0;
+ (void)trackQRCodeRequestWithTimeCost:(double)a0 context:(id)a1 error:(id)a2;
+ (void)requestImageWithQRCodeUrlList:(id)a0 avatarList:(id)a1 completion:(id /* block */)a2;
+ (void)requestRoundQRCodeImageURLWithContext:(id)a0 completion:(id /* block */)a1;
+ (void)requestSquareQRCodeURLWithContext:(id)a0 completion:(id /* block */)a1;
+ (id)contentViewWithContext:(id)a0;
+ (void)requestQRCodeImageURLWithContext:(id)a0 completion:(id /* block */)a1;


@end
