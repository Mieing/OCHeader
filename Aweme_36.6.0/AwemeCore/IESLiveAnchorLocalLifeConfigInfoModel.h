@class NSString, NSDictionary;

@interface IESLiveAnchorLocalLifeConfigInfoModel : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *mainTitle;
@property (retain, nonatomic) NSString *subTitle;
@property (retain, nonatomic) NSString *applyLink;
@property (copy, nonatomic) NSString *imgName;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
