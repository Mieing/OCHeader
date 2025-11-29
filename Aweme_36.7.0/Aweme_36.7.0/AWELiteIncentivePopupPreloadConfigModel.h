@class NSString;

@interface AWELiteIncentivePopupPreloadConfigModel : AWELiteBaseApiModel

@property (copy, nonatomic) NSString *popupPath;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) double expireTime;
@property (nonatomic) double serverTime;
@property (nonatomic) long long taskFinishStatus;
@property (copy, nonatomic) NSString *taskID;
@property (nonatomic) BOOL needPreloadPopup;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
