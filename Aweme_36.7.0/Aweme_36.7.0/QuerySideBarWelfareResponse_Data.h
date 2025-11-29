@class NSString, QuerySideBarWelfareResponse_SideBarWelfareGuidance;

@interface QuerySideBarWelfareResponse_Data : IESLivePBBaseMessage

@property (nonatomic) long long statusCode;
@property (copy, nonatomic) NSString *statusMsg;
@property (nonatomic) BOOL popUp;
@property (retain, nonatomic) QuerySideBarWelfareResponse_SideBarWelfareGuidance *guidanceInfo;
@property (nonatomic) BOOL hasGuidanceInfo;
@property (nonatomic) int subscribeStatus;

+ (id)descriptor;

@end
