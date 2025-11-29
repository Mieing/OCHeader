@class NSArray, NSString;

@interface AWEPOIUgcBottomBarModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *backgroundImageUrls;
@property (copy, nonatomic) NSArray *darkBackgrounImageUrls;
@property (nonatomic) BOOL hasUserRated;
@property (copy, nonatomic) NSArray *icons;
@property (copy, nonatomic) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;
+ (id)iconsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
