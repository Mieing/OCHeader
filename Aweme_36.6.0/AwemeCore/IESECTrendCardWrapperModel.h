@class NSArray, IESECURLModel, NSString, IESECTrendCardButtonModel;

@interface IESECTrendCardWrapperModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long insertPosition;
@property (copy, nonatomic) NSArray *trends;
@property (retain, nonatomic) IESECTrendCardButtonModel *button;
@property (retain, nonatomic) IESECURLModel *icon;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *descColor;
@property (retain, nonatomic) IESECURLModel *backgroundImage;
@property (copy, nonatomic) NSString *category;
@property (nonatomic) long long trendPosition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)trendsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
