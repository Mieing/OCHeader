@class NSString;

@interface IESAccountPanelThemeTextDataModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *titleExtraInfo;
@property (copy, nonatomic) NSString *btnExtraInfo;
@property (copy, nonatomic) NSString *tagText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
