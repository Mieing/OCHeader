@class NSString, IESECURLModel;

@interface IESECGoodsResourceModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *url;
@property (retain, nonatomic) IESECURLModel *icon;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *descColor;
@property (retain, nonatomic) IESECURLModel *bgPic;
@property (nonatomic) unsigned long long location;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
