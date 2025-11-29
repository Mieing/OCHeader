@class NSArray, IESECWinHeaderSectionStyle, NSString;

@interface IESECWinHeaderSectionModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECWinHeaderSectionStyle *sectionStyle;
@property (retain, nonatomic) NSArray *items;
@property (nonatomic) unsigned long long splitConfigType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)itemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
