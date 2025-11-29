@class NSArray, NSString;

@interface AWEPLVCardGridConfigModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *titleSizeConfig;
@property (retain, nonatomic) NSArray *subTitleSizeConfig;
@property (nonatomic) long long titleRow;
@property (retain, nonatomic) NSArray *cardColumnConfig;
@property (nonatomic) double heightPercent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
