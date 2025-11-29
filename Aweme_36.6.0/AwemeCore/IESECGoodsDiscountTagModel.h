@class NSString, NSNumber, IESECURLModel;

@interface IESECGoodsDiscountTagModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSString *tagHeader;
@property (copy, nonatomic) NSString *tagIcon;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *subType;
@property (copy, nonatomic) NSString *discountID;
@property (copy, nonatomic) NSString *labelID;
@property (retain, nonatomic) NSNumber *kolUserTag;
@property (retain, nonatomic) NSNumber *isShow;
@property (nonatomic) long long uiType;
@property (copy, nonatomic) NSString *tagHeaderBgColor;
@property (nonatomic) long long lineType;
@property (retain, nonatomic) IESECURLModel *image;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
