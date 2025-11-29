@class NSArray, NSDictionary, NSString;

@interface AWENearbyCoverCommentModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long awemeID;
@property (copy, nonatomic) NSArray *comments;
@property (nonatomic) unsigned long long currentIndex;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)commentsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
