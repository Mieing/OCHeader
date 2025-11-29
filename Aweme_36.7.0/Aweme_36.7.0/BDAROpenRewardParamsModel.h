@class NSString, NSArray, NSDictionary, NSNumber, BDARewardRequestConfig;

@interface BDAROpenRewardParamsModel : NSObject

@property (nonatomic) BOOL useGetRewardConfig;
@property (copy, nonatomic) NSString *adFrom;
@property (retain, nonatomic) NSNumber *adRit;
@property (retain, nonatomic) NSNumber *creatorId;
@property (copy, nonatomic) NSString *subscribeEventKey;
@property (copy, nonatomic) NSString *jsbToken;
@property (retain, nonatomic) BDARewardRequestConfig *grantRewardConfig;
@property (retain, nonatomic) BDARewardRequestConfig *getRewardConfig;
@property (retain, nonatomic) NSArray *rewardList;
@property (retain, nonatomic) NSArray *retainDialogConfig;
@property (retain, nonatomic) NSArray *moreRewardDialogConfig;
@property (copy, nonatomic) NSDictionary *extra;

- (void).cxx_destruct;

@end
