@class IESECSKUViewConfigModel, IESECURLModel, IESECSKUBlankConfigModel, IESECSKUTextConfigModel, NSDictionary, NSString;

@interface IESECSKUConfigItemModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECSKUViewConfigModel *viewObj;
@property (retain, nonatomic) IESECSKUBlankConfigModel *blankObj;
@property (retain, nonatomic) IESECURLModel *imageObj;
@property (retain, nonatomic) IESECSKUTextConfigModel *textObj;
@property (retain, nonatomic) NSDictionary *showEventParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
