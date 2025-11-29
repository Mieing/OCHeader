@class NSArray, NSString;

@interface AWEGrouponC2HeaderToolDataModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *itemList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;
+ (id)itemListJSONTransformer;

- (void).cxx_destruct;

@end
