@class AWEPLVCardGridConfigModel, NSNumber, NSString;

@interface AWEPLVCardConfigModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEPLVCardGridConfigModel *cardGridConfig;
@property (retain, nonatomic) NSNumber *cardStyle;
@property (nonatomic) BOOL cardCover;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cardGridConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
