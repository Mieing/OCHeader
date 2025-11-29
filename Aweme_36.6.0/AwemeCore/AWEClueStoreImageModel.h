@class NSString, NSArray;

@interface AWEClueStoreImageModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *imageURI;
@property (copy, nonatomic) NSArray *imageURLs;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
