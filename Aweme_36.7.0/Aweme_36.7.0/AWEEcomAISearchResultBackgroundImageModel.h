@class NSString, NSNumber;

@interface AWEEcomAISearchResultBackgroundImageModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *imageUrl;
@property (retain, nonatomic) NSNumber *fixedHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
