@class NSString, AWEAwemeModel;

@interface AWEVideoProductDetailDataController : NSObject

@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *enterFrom;

- (void)requestVideoPaymentProductInfoWithBlock:(id /* block */)a0;
- (id)feedConfigRequestParamsWithParams;
- (void)updateModelPaymentProductInfoWithResponseModel:(id)a0;
- (void).cxx_destruct;

@end
