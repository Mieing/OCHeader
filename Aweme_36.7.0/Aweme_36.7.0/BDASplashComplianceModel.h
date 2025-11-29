@class NSDictionary;

@interface BDASplashComplianceModel : NSObject

@property (nonatomic) long long style;
@property (nonatomic) long long slideDirection;
@property (nonatomic) long long complianceType;
@property (nonatomic) BOOL isAsyncRender;
@property (copy, nonatomic) NSDictionary *complianceArea;

- (id)setupSlideDistanceWithDictionary:(id)a0;
- (BOOL)isLiving:(id)a0;
- (id)getModelClassString;
- (void)downloadResourceDownloadBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
