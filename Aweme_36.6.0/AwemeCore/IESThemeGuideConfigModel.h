@class NSArray, IESAccountPanelThemeTextDataModel, NSString;

@interface IESThemeGuideConfigModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL enableFullScene;
@property (copy, nonatomic) NSArray *enableSceneList;
@property (retain, nonatomic) IESAccountPanelThemeTextDataModel *textData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
