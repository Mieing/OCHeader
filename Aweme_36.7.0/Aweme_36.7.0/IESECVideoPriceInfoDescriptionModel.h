@class NSString, NSNumber;

@interface IESECVideoPriceInfoDescriptionModel : MTLModel <IESECVideoPriceViewDescriptionProtocol, MTLJSONSerializing>

@property (readonly, nonatomic) unsigned long long viewStyleType;
@property (readonly, nonatomic) NSString *viewText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSNumber *styleType;
@property (copy, nonatomic) NSString *text;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
