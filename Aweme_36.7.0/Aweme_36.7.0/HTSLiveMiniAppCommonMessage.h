@class NSString, HTSLiveCommon, HTSLiveMiniAppDetailData;

@interface HTSLiveMiniAppCommonMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) int scene;
@property (copy, nonatomic) NSString *miniAppId;
@property (nonatomic) int action;
@property (retain, nonatomic) HTSLiveMiniAppDetailData *data_p;
@property (nonatomic) BOOL hasData_p;
@property (copy, nonatomic) NSString *openId;
@property (copy, nonatomic) NSString *extra;

+ (id)descriptor;

@end
