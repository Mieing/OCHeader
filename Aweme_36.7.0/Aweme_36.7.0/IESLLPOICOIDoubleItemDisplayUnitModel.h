@class NSString, IESLLifeURLModel, IESLLPOICOIDoubleItemDisplayStyleModel;

@interface IESLLPOICOIDoubleItemDisplayUnitModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *styleType;
@property (retain, nonatomic) IESLLifeURLModel *iconUrl;
@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) IESLLPOICOIDoubleItemDisplayStyleModel *style;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
