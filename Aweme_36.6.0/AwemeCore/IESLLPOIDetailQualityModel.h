@class NSString, IESLLifeURLModel;

@interface IESLLPOIDetailQualityModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) IESLLifeURLModel *entranceIconURL;
@property (copy, nonatomic) NSString *desc;
@property (nonatomic) long long score;
@property (copy, nonatomic) NSString *rankCode;
@property (nonatomic) long long qualityRank;
@property (retain, nonatomic) IESLLifeURLModel *rankIconURL;
@property (copy, nonatomic) NSString *rankLinkDesc;
@property (copy, nonatomic) NSString *rankSchema;
@property (nonatomic) long long rankType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
