@class NSArray, NSString;

@interface AWESearchProfileSideBarModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *modules;
@property (nonatomic) BOOL showPublishEntrance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modulesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
