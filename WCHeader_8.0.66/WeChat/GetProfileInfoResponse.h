@class GetProfileInfoResponse_ServicePreInfo, GetProfileInfoResponse_RelievedBuyInfo, GetProfileInfoResponse_ProfilePageInfo, GetProfileInfoResponse_ActivityInfo, GetProfileInfoResponse_WxaLikeList, GetProfileInfoResponse_WxaRelateBrandList, GetCommentInfoResp_CommentModule, BaseResponse, GetProfileInfoResponse_DeveloperServiceInfo, NSMutableArray, NSString, GetProfileInfoResponse_WxaEvaluateBasicInfo, GetProfileInfoResponse_WxaRelateWeAppList, GetProfileInfoResponse_FinancialLicenseInfo;

@interface GetProfileInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) GetProfileInfoResponse_ServicePreInfo *servicePreInfo;
@property (retain, nonatomic) GetProfileInfoResponse_WxaEvaluateBasicInfo *evaluateBasicInfo;
@property (retain, nonatomic) GetProfileInfoResponse_WxaLikeList *friendLikeList;
@property (retain, nonatomic) GetProfileInfoResponse_WxaRelateBrandList *relateBrandList;
@property (retain, nonatomic) GetProfileInfoResponse_WxaRelateWeAppList *relateWeappList;
@property (retain, nonatomic) NSString *officicalUrl;
@property (retain, nonatomic) NSString *guarantUrl;
@property (retain, nonatomic) NSMutableArray *newRelateWeappList;
@property (retain, nonatomic) GetProfileInfoResponse_RelievedBuyInfo *relievedBuyInfo;
@property (nonatomic) unsigned int useKf;
@property (retain, nonatomic) GetCommentInfoResp_CommentModule *commentInfo;
@property (retain, nonatomic) GetProfileInfoResponse_ProfilePageInfo *pageInfo;
@property (nonatomic) unsigned int nameVerify;
@property (nonatomic) unsigned int customerType;
@property (retain, nonatomic) GetProfileInfoResponse_ActivityInfo *activityInfo;
@property (retain, nonatomic) GetProfileInfoResponse_DeveloperServiceInfo *developerService;
@property (retain, nonatomic) GetProfileInfoResponse_FinancialLicenseInfo *financialLicenseInfo;

+ (void)initialize;

@end
