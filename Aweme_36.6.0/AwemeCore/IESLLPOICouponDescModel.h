@class NSString, IESLLifeURLModel;

@interface IESLLPOICouponDescModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *firstText;
@property (copy, nonatomic) NSString *secondText;
@property (copy, nonatomic) NSString *actionSchema;
@property (retain, nonatomic) IESLLifeURLModel *iconURLModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
