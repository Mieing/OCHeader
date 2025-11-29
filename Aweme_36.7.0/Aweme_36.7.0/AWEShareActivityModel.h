@class NSString, NSDictionary, AWEShareActivityPicModel, AWEShareActivityVideoModel;

@interface AWEShareActivityModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *actionDesc;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *activityURL;
@property (copy, nonatomic) NSString *sharePlatform;
@property (copy, nonatomic) NSDictionary *activityInfo;
@property (copy, nonatomic) NSString *activityInfoStr;
@property (copy, nonatomic) NSString *carrierDepInfo;
@property (copy, nonatomic) NSString *secActivityInfo;
@property (copy, nonatomic) NSString *shareScene;
@property (copy, nonatomic) NSString *query;
@property (nonatomic) unsigned long long shareType;
@property (retain, nonatomic) AWEShareActivityPicModel *picModel;
@property (retain, nonatomic) AWEShareActivityVideoModel *videoModel;

+ (id)activityInfoJSONTransformer;
+ (id)videoModelJSONTransformer;
+ (id)picModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
