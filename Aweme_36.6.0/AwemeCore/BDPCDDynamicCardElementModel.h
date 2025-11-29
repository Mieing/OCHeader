@class NSString, NSDictionary, NSArray;

@interface BDPCDDynamicCardElementModel : BDPCDDynamicCardSupportableValueModel

@property (retain, nonatomic) NSString *elementType;
@property (copy, nonatomic) NSDictionary *props;
@property (copy, nonatomic) NSArray *children;
@property (copy, nonatomic) NSString *levelMaterialName;

- (void).cxx_destruct;

@end
