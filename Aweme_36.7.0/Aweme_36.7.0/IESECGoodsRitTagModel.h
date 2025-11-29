@class IESECRitTagUIModel, NSArray, IESECURLModel, NSString, IESECGoodsRitTagColorModel, NSDictionary, IESECGoodsRitTagUIConfigModel;

@interface IESECGoodsRitTagModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECURLModel *icon;
@property (copy, nonatomic) NSArray *textContents;
@property (copy, nonatomic) NSString *labelName;
@property (copy, nonatomic) NSString *trackName;
@property (copy, nonatomic) NSString *urlDoc;
@property (retain, nonatomic) IESECGoodsRitTagColorModel *color;
@property (copy, nonatomic) NSString *tagID;
@property (copy, nonatomic) NSString *jumpURL;
@property (copy, nonatomic) NSDictionary *extra;
@property (retain, nonatomic) IESECGoodsRitTagUIConfigModel *uiConfig;
@property (copy, nonatomic) NSString *trackParams;
@property (retain, nonatomic) IESECRitTagUIModel *tagUI;
@property (copy, nonatomic) NSArray *subRitTags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)ritTagsJSONTransformerForClass:(Class)a0;
+ (id)subRitTagsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
