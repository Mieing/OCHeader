@class NSString, BDUGLuckyADRVInfoModel;

@interface BDUGLuckyADRVLoadMoreModel : BDUGLuckyJSONModel

@property (nonatomic) BOOL canShow;
@property (copy, nonatomic) NSString *token;
@property (retain, nonatomic) BDUGLuckyADRVInfoModel *infoModel;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
