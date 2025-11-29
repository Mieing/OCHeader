@class NSString, NSArray;

@interface IESECSKUSpecsNodeSpec : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *hintText;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *index;
@property (nonatomic) BOOL hideSpec;
@property (nonatomic) BOOL showPrice;
@property (nonatomic) BOOL canShowSmallPic;
@property (nonatomic) BOOL canShowBigPic;
@property (retain, nonatomic) NSArray *specItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)specItemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
