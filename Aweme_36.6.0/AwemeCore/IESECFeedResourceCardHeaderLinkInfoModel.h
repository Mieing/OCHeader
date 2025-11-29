@class NSString, IESECURLModel, IESECFeedResourceCardMarginModel;

@interface IESECFeedResourceCardHeaderLinkInfoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECURLModel *icon;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *link;
@property (copy, nonatomic) NSString *textColor;
@property (nonatomic) long long textSize;
@property (retain, nonatomic) IESECFeedResourceCardMarginModel *textMargin;
@property (retain, nonatomic) IESECFeedResourceCardMarginModel *iconMargin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)textMarginJSONTransformer;
+ (id)iconMarginJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
