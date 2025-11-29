@class NSString, NSDictionary;

@interface AWENearbyTaskFeedUpdateInfoModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *cardId;
@property (copy, nonatomic) NSDictionary *data;

+ (BOOL)automaticallyDefaultMapping;

- (void).cxx_destruct;

@end
