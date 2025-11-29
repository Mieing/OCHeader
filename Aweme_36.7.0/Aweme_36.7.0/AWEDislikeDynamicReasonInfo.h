@class NSString, AWEURLModel;

@interface AWEDislikeDynamicReasonInfo : AWEBaseApiModel

@property (copy, nonatomic) NSString *buttonType;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) AWEURLModel *iconURL;
@property (copy, nonatomic) NSString *clientAnchorExtra;
@property (copy, nonatomic) NSString *serverAnchorExtra;
@property (nonatomic) BOOL showSep;
@property (copy, nonatomic) NSString *defaultImageName;
@property (nonatomic) unsigned long long selectedType;

+ (id)iconURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
