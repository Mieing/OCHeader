@class NSArray, NSString;

@interface AWEFeedSearchLongBarModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *data;
@property (copy, nonatomic) NSString *logID;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)dataJSONTransformer;

- (BOOL)isValidHomepageRecomData;
- (void).cxx_destruct;

@end
