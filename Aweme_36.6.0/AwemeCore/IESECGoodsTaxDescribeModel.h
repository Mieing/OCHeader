@class NSString, NSArray;

@interface IESECGoodsTaxDescribeModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *taxTitle;
@property (retain, nonatomic) NSString *taxDescribe;
@property (retain, nonatomic) NSArray *taxDescribeItems;
@property (retain, nonatomic) NSString *hasTax;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
