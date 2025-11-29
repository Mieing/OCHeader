@class GetWxaAppNearbyResponse_NearbyWxaAppInfo, WxaAppBaseResponse, NSString, NSMutableArray, BaseResponse;

@interface GetWxaAppNearbyResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) WxaAppBaseResponse *wxaappBaseresponse;
@property (retain, nonatomic) NSString *detailNearbyAppLink;
@property (nonatomic) unsigned int linkLifespan;
@property (nonatomic) unsigned int appCount;
@property (retain, nonatomic) NSString *nearbyListId;
@property (retain, nonatomic) NSMutableArray *appList;
@property (nonatomic) unsigned int openThreshold;
@property (nonatomic) unsigned int displayStrategyId;
@property (retain, nonatomic) NSString *wording;
@property (retain, nonatomic) NSString *wordingColor;
@property (retain, nonatomic) NSString *noticeWording;
@property (retain, nonatomic) NSString *noticeBgColor;
@property (nonatomic) unsigned int disappearOneClick;
@property (nonatomic) unsigned int openWxa;
@property (retain, nonatomic) GetWxaAppNearbyResponse_NearbyWxaAppInfo *nearbyEntry;

+ (void)initialize;

@end
