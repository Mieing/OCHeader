@class NSString, NSNumber;

@interface IESECXBridgeEcMallScrollToFavoriteCellMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *sectionID;
@property (nonatomic) BOOL animated;
@property (copy, nonatomic) NSString *itemID;
@property (retain, nonatomic) NSNumber *itemIndex;
@property (retain, nonatomic) NSNumber *offset;
@property (retain, nonatomic) NSNumber *onlyWhenHeaderCardVisible;
@property (retain, nonatomic) NSNumber *moveOutside;
@property (retain, nonatomic) NSNumber *forceScroll;

+ (id)requiredKeyPaths;
+ (id)defaultValues;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
