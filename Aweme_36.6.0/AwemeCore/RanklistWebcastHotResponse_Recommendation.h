@class NSString, HTSLiveUser;

@interface RanklistWebcastHotResponse_Recommendation : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveUser *user;
@property (nonatomic) BOOL hasUser;
@property (copy, nonatomic) NSString *roomIdStr;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *description_p;

+ (id)descriptor;

@end
