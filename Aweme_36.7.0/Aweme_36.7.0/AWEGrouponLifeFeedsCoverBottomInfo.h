@class NSArray, NSString;

@interface AWEGrouponLifeFeedsCoverBottomInfo : AWEBaseApiModel

@property (retain, nonatomic) NSArray *tags;
@property (copy, nonatomic) NSString *jumpUrl;
@property (nonatomic) BOOL hasAdTag;

+ (BOOL)automaticallyDefaultMapping;
+ (id)tagsJSONTransformer;

- (void).cxx_destruct;

@end
