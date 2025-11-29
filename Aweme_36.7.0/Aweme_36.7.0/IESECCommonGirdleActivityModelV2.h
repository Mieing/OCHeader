@class NSString, IESECURLModel, IESECCommonGirdleCountSloganModel, IESECCommonGirdleCountDownModel;

@interface IESECCommonGirdleActivityModelV2 : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *girdleType;
@property (retain, nonatomic) IESECURLModel *bgPic;
@property (retain, nonatomic) IESECURLModel *namePic;
@property (retain, nonatomic) IESECCommonGirdleCountSloganModel *slogan;
@property (retain, nonatomic) IESECCommonGirdleCountDownModel *countDown;
@property (retain, nonatomic) NSString *url;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
