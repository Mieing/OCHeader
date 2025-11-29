@class NSString, NSNumber;

@interface IESECGoodsDetailButtonTipsModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL useButtonTips;
@property (retain, nonatomic) NSString *tips;
@property (nonatomic) BOOL isCentered;
@property (retain, nonatomic) NSString *bgColor;
@property (retain, nonatomic) NSString *tipsColor;
@property (retain, nonatomic) NSString *arrowColor;
@property (retain, nonatomic) NSString *tipsUrl;
@property (retain, nonatomic) NSNumber *tipsPiecedValue;
@property (retain, nonatomic) NSNumber *textType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
