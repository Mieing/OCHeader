@class CJPayQueryBindAuthorizeProtocolModel, CJPayQueryBindAuthorizeBriefInfoModel;

@interface CJPayQueryBindAuthorizeInfoResponse : CJPayBaseResponse

@property (retain, nonatomic) CJPayQueryBindAuthorizeBriefInfoModel *authBriefModel;
@property (retain, nonatomic) CJPayQueryBindAuthorizeProtocolModel *protocolModel;

+ (id)keyMapper;

- (BOOL)propertyIsOptional:(id)a0;
- (void).cxx_destruct;

@end
