@class NSString, NSDictionary, NSNumber, AWEPLVCardGridConfigModel;

@interface AWEPadListViewCardModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *cardStyle;
@property (retain, nonatomic) NSNumber *dataType;
@property (copy, nonatomic) NSDictionary *cardData;
@property (nonatomic) BOOL cardCover;
@property (copy, nonatomic) NSDictionary *coverLabelInfo;
@property (retain, nonatomic) AWEPLVCardGridConfigModel *cardGridConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cardGridConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
