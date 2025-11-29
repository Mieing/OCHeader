@class NSString, NSArray, NSDictionary, CJPayProcessInfo, CJPayUserInfo;

@interface CJPayPassCodeVerifyModel : NSObject

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *merchantId;
@property (copy, nonatomic) NSString *smchId;
@property (copy, nonatomic) NSString *mobile;
@property (copy, nonatomic) id /* block */ backBlock;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *orderNo;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (retain, nonatomic) CJPayUserInfo *userInfo;
@property (nonatomic) BOOL isIndependentBindCard;
@property (nonatomic) BOOL isQuickBindCard;
@property (retain, nonatomic) CJPayProcessInfo *processInfo;
@property (copy, nonatomic) NSArray *activityInfo;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (nonatomic) BOOL isUnionBindCard;

- (void).cxx_destruct;

@end
