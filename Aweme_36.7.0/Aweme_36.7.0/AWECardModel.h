@class NSString, NSArray;

@interface AWECardModel : AWEImageDecorateViewModel {
    NSString *_identifier;
}

@property (copy, nonatomic) NSString *tagIcon;
@property (copy, nonatomic) NSArray *decorateViews;

+ (id)decorateViewsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)identifier;

@end
