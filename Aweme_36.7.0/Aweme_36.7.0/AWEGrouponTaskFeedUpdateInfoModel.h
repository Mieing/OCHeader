@class NSString, NSDictionary;

@interface AWEGrouponTaskFeedUpdateInfoModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *cardId;
@property (copy, nonatomic) NSDictionary *data;

+ (BOOL)automaticallyDefaultMapping;

- (void).cxx_destruct;

@end
