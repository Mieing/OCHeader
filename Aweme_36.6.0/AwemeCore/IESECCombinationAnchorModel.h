@class NSString, IESECURLModel;

@interface IESECCombinationAnchorModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) double positonX;
@property (nonatomic) double positonY;
@property (retain, nonatomic) NSString *direction;
@property (retain, nonatomic) IESECURLModel *iconImage;
@property (retain, nonatomic) NSString *goodsTitle;
@property (retain, nonatomic) NSString *goodsPrice;
@property (retain, nonatomic) NSString *urlSchema;
@property (retain, nonatomic) NSString *productID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
