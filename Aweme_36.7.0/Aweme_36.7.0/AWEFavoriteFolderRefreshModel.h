@class NSNumber, NSString;

@interface AWEFavoriteFolderRefreshModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long favoriteFolderID;
@property (nonatomic) unsigned long long filterReason;
@property (retain, nonatomic) NSNumber *totalItemsNumber;
@property (copy, nonatomic) NSString *favoriteFolderName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)authorJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
