@class NSDictionary, NSString;
@protocol BDASplashComplianceViewHolderDelegate;

@interface BDASplashComplianceBaseViewModel : NSObject <BDASplashViewModelCreateProtocol, BDASplashViewModelProtocol, BDASplashViewModelDownloadProtocol>

@property (copy, nonatomic) NSDictionary *config;
@property (nonatomic) long long complianceType;
@property (weak, nonatomic) id<BDASplashComplianceViewHolderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)downloadResourceWithComplianceModel:(id)a0 downloadBlock:(id /* block */)a1;
+ (id)getSplashHolderWithModel:(id)a0 delegate:(id)a1;

- (BOOL)loadResource;
- (id)initWithModel:(id)a0 delegate:(id)a1;
- (BOOL)checkParams;
- (id)getViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewHolder:(id)a1;
- (long long)getModelType;
- (void)asyncGetImageWithKey:(id)a0 completionBlock:(id /* block */)a1;
- (void)asyncGetImageWithImageInfo:(id)a0 key:(id)a1 completionBlock:(id /* block */)a2;
- (id)splashImageWithImageInfo:(id)a0 Key:(id)a1;
- (id)alphaVideoPathWithVideoInfo:(id)a0;
- (id)splashVideoDictWithVideoInfo:(id)a0 Key:(id)a1;
- (void).cxx_destruct;

@end
