@class NSString, NSNumber, AWELVideoBriefInfoModel;

@interface AWEPlayletSubInfoModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *playletID;
@property (retain, nonatomic) NSNumber *contentSubType;
@property (retain, nonatomic) AWELVideoBriefInfoModel *longVideoInfo;

+ (id)longVideoInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
