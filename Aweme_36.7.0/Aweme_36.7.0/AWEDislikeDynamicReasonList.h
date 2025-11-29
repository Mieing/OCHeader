@class NSString, NSArray;

@interface AWEDislikeDynamicReasonList : AWEBaseApiModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSArray *reasonListArray;
@property (copy, nonatomic) NSString *extra;

+ (id)reasonListArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
