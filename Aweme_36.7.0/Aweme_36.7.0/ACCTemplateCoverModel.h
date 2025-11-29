@class NSString;

@interface ACCTemplateCoverModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *largeImageURL;
@property (copy, nonatomic) NSString *mediumImageURL;
@property (copy, nonatomic) NSString *smallImageURL;
@property (copy, nonatomic) NSString *largPngURL;
@property (copy, nonatomic) NSString *mediumPngURL;
@property (copy, nonatomic) NSString *smallPngURL;
@property (copy, nonatomic) NSString *coverImageURL;
@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)coverURL;

@end
