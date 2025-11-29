@class NSArray, NSString;

@interface AWEPLVSectionGridConfigModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *titleSizeConfig;
@property (retain, nonatomic) NSArray *buttonTextSizeConfig;
@property (retain, nonatomic) NSArray *columns;
@property (retain, nonatomic) NSArray *maxRows;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
