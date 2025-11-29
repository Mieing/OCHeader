@class NSString, CJPayUnionBindCardAuthorizationResponse;

@interface CJPayUnionBindCardHalfAccreditViewModel : CJPayBindCardPageBaseModel

@property (copy, nonatomic) NSString *signOrderNo;
@property (retain, nonatomic) CJPayUnionBindCardAuthorizationResponse *authorizationResponse;

+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
