@class NSArray, NSString;

@interface AWELifeFeedsCoverBottomInfo : AWEBaseApiModel

@property (retain, nonatomic) NSArray *tags;
@property (copy, nonatomic) NSString *jumpUrl;
@property (nonatomic) BOOL hasAdTag;

+ (BOOL)automaticallyDefaultMapping;
+ (id)tagsJSONTransformer;

- (void).cxx_destruct;

@end
