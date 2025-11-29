@class IESECRelationPadding, IESECURLModel, IESECRelationClickAction, IESECRelationTextConfigModel, IESECRelationDividerLineConfigModel, NSString, NSDictionary;

@interface IESECRelationSubTagModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long type;
@property (retain, nonatomic) IESECRelationTextConfigModel *text;
@property (retain, nonatomic) IESECURLModel *image;
@property (retain, nonatomic) IESECURLModel *specialImage;
@property (retain, nonatomic) IESECRelationDividerLineConfigModel *dividerLine;
@property (nonatomic) double leftMargin;
@property (nonatomic) double rightMargin;
@property (retain, nonatomic) IESECRelationPadding *padding;
@property (retain, nonatomic) IESECRelationClickAction *clickAction;
@property (copy, nonatomic) NSString *showEventName;
@property (copy, nonatomic) NSString *clickEventName;
@property (copy, nonatomic) NSDictionary *showEventParams;
@property (copy, nonatomic) NSDictionary *clickEventParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
