@class NSString, NSDictionary, NSNumber;

@interface AWENearbyHotSpotFeedJSBListResponse : AWEBaseApiModel

@property (retain, nonatomic) NSString *awemeId;
@property (retain, nonatomic) NSDictionary *awemeStruct;
@property (retain, nonatomic) NSNumber *cursor;

+ (id)awemeStructJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
