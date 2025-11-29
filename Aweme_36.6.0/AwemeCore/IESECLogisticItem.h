@class NSString, IESECURLModel;

@interface IESECLogisticItem : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long itemType;
@property (retain, nonatomic) IESECURLModel *pic;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *fontColor;
@property (nonatomic) unsigned long long fontType;
@property (readonly, copy, nonatomic) NSString *fontName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
