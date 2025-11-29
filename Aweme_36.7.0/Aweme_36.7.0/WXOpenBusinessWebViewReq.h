@class NSDictionary;

@interface WXOpenBusinessWebViewReq : BaseReq

@property (nonatomic) unsigned int businessType;
@property (retain, nonatomic) NSDictionary *queryInfoDic;

- (void).cxx_destruct;

@end
