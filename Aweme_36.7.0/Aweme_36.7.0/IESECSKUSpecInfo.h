@class NSString, NSArray, NSDictionary;

@interface IESECSKUSpecInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *subDesc;
@property (nonatomic) BOOL shouldHideSpecs;
@property (nonatomic) BOOL shouldDefualtSelect;
@property (nonatomic) long long specType;
@property (nonatomic) BOOL hasSelectedByUser;
@property (copy, nonatomic) NSArray *specItems;
@property (readonly, nonatomic) BOOL isTimeSKU;
@property (nonatomic) BOOL showBigPic;
@property (nonatomic) BOOL showSmallPic;
@property (nonatomic) long long specMode;
@property (copy, nonatomic) NSDictionary *extraAttribute;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)specItemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
