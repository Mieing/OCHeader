@class NSString, NSArray;

@interface AWEGDRateHeader : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long valid_count;
@property (copy, nonatomic) NSString *valid_count_str;
@property (nonatomic) long long total_count;
@property (copy, nonatomic) NSString *positive_percent;
@property (copy, nonatomic) NSString *load_more_text_simple;
@property (copy, nonatomic) NSString *load_more_text;
@property (copy, nonatomic) NSString *sale_channel;
@property (retain, nonatomic) NSArray *tags;
@property (nonatomic) BOOL show_ugc_comment_more;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tagsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
