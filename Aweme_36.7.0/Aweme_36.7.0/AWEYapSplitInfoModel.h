@class NSString, AWEYapSplitDetailModel;

@interface AWEYapSplitInfoModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *orderNo;
@property (copy, nonatomic) NSString *bizCode;
@property (copy, nonatomic) NSString *bizMsg;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long splitStatus;
@property (nonatomic) long long userRole;
@property (nonatomic) long long userRoleStatus;
@property (retain, nonatomic) AWEYapSplitDetailModel *detailInfo;

+ (id)detailInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
