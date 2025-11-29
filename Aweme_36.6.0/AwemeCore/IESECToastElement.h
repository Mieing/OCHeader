@class NSDictionary, IESECTextWithIconElement, NSString;

@interface IESECToastElement : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECTextWithIconElement *content;
@property (nonatomic) double duration;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
