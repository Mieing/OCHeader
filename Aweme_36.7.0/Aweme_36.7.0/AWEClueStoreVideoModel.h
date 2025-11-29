@class NSString, NSArray;

@interface AWEClueStoreVideoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *vid;
@property (nonatomic) long long itemID;
@property (copy, nonatomic) NSArray *coverURLs;
@property (copy, nonatomic) NSArray *playAddressURLs;
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
