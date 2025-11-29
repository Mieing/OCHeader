@class AWELongVideoAdPreviewConfig, NSString, NSArray, NSNumber;

@interface AWELongVideoAdChargeInfoModel : AWEBaseApiModel

@property (retain, nonatomic) AWELongVideoAdPreviewConfig *previewConfig;
@property (nonatomic) long long unlockType;
@property (nonatomic) double remainedCanWatchDuration;
@property (nonatomic) long long totalAdCount;
@property (nonatomic) long long remainedAdCount;
@property (retain, nonatomic) NSNumber *creatorId;
@property (nonatomic) long long rit;
@property (copy, nonatomic) NSString *adFrom;
@property (copy, nonatomic) NSString *creatorIdStr;
@property (copy, nonatomic) NSArray *awards;

+ (id)previewConfigJSONTransformer;
+ (id)awardsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
