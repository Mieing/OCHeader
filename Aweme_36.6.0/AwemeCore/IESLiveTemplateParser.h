@class NSMutableDictionary, NSString, NSMutableSet, NSHashTable, NSMutableArray;
@protocol IESLiveBootableModel;

@interface IESLiveTemplateParser : NSObject <IESLiveTemplateParserProtocol>

@property (retain, nonatomic) id<IESLiveBootableModel> room;
@property (retain, nonatomic) NSMutableArray *components;
@property (retain, nonatomic) NSMutableDictionary *componentPortraitViewType;
@property (retain, nonatomic) NSMutableDictionary *componentLandscapeViewType;
@property (retain, nonatomic) NSMutableDictionary *componentPlatformDataSwitch;
@property (retain, nonatomic) NSMutableSet *blocksSet;
@property (retain, nonatomic) NSHashTable *loadedComponents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)nameList;
- (BOOL)containsComponent:(id)a0;
- (void)parserWithRoom:(id)a0 scene:(unsigned long long)a1;
- (id)portraitViewTypeForComponent:(id)a0;
- (id)landscapeViewTypeForComponent:(id)a0;
- (BOOL)componentDataOpenForComponent:(id)a0;
- (BOOL)blocksComponent:(id)a0;
- (id)portraitDynamicLayoutRules;
- (id)landscapeDynamicLayoutRules;
- (void)convetorItemsForContainerLayout:(id)a0 scene:(unsigned long long)a1 portrait:(BOOL)a2;
- (void).cxx_destruct;
- (id)init;

@end
