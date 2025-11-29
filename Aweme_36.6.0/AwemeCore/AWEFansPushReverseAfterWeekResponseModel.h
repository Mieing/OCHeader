@class NSArray;

@interface AWEFansPushReverseAfterWeekResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *urgeList;
@property (nonatomic) long long total;

+ (id)urgeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
