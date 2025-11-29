@class IESECListKitContentData, NSString;

@interface IESECListKitPriceData : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECListKitContentData *symbol;
@property (retain, nonatomic) IESECListKitContentData *integers;
@property (retain, nonatomic) IESECListKitContentData *decimals;
@property (retain, nonatomic) IESECListKitContentData *unit;
@property (nonatomic) double marginRight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
