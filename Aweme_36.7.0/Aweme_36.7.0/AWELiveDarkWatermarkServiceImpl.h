@class NSString, AWECodeGenGetWmImgResponseModel, UIImage, NSError, NSDictionary, NSHashTable;

@interface AWELiveDarkWatermarkServiceImpl : NSObject <IESLiveDarkWatermarkService>

@property (retain, nonatomic) AWECodeGenGetWmImgResponseModel *response;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) BOOL isRequesting;
@property (retain, nonatomic) UIImage *waterImage;
@property (retain, nonatomic) NSDictionary *watermarkConfig;
@property (retain, nonatomic) NSHashTable *cacheViews;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (void)fetchUrl;
- (void)sendDarkWaterMarkRequest;
- (void)reportFailedWaterMarkWithReason:(id)a0;
- (void)dealDarkWaterMarkResponse:(id)a0 error:(id)a1 report:(BOOL)a2;
- (BOOL)enableLiveDarkWatermark:(id)a0 scene:(long long)a1;
- (void)bindLiveDarkWatermarkWithImageView:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)addObserver;

@end
