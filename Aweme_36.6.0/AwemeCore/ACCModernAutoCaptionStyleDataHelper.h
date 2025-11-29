@class NSArray, NSDictionary, NSMutableDictionary, NSString;

@interface ACCModernAutoCaptionStyleDataHelper : NSObject

@property (copy, nonatomic) NSDictionary *originalConfig;
@property (nonatomic) BOOL useDefault;
@property (copy, nonatomic) NSArray *panelConfigs;
@property (retain, nonatomic) NSMutableDictionary *currentSelectedStyles;
@property (retain, nonatomic) NSString *taskId;
@property (readonly, copy, nonatomic) NSDictionary *selectedStyles;
@property (copy, nonatomic) id /* block */ dataDidChanged;
@property (copy, nonatomic) NSString *customCategory;

+ (id)templateItems:(id)a0;
+ (id)fontItems:(BOOL)a0 effects:(id)a1;
+ (id)colorItems:(BOOL)a0;
+ (id)styleItems:(BOOL)a0;

- (id)initWithConfig:(id)a0 taskId:(id)a1;
- (void)fetchAllPanelList;
- (void)prepareForDefaultStylesCompletion:(id /* block */)a0;
- (void)styleDidChanged:(long long)a0 index:(unsigned long long)a1;
- (void)selectStyle:(long long)a0 index:(unsigned long long)a1 completion:(id /* block */)a2;
- (id)configForCache;
- (void)genetatePanelConfigs;
- (void)recoverCurrentStylesToConfig:(id)a0;
- (void)updateDataWithTemplateChange:(BOOL)a0;
- (void)p_updateModel:(id)a0;
- (id)panelConfigForType:(long long)a0;
- (void)resetSelectedStatusForTypes:(id)a0 isSelected:(BOOL)a1;
- (id)recoverConfigWithCache:(id)a0;
- (id)getItemForType:(long long)a0 index:(unsigned long long)a1;
- (BOOL)styleHasEdited;
- (void).cxx_destruct;
- (void)updateWithConfig:(id)a0;

@end
