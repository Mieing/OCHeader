@class IESECTextElement, NSString, IESECIconsWithSpaceElement;

@interface IESECLongTitleElement : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECIconsWithSpaceElement *headIconElement;
@property (retain, nonatomic) IESECTextElement *titleContent;
@property (retain, nonatomic) IESECIconsWithSpaceElement *tailIconElement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
