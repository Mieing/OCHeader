@class NSArray;

@interface AFDLongPressDislikeReasonsSectionModel : AFDLongPressBaseSectionViewModel

@property (retain, nonatomic) NSArray *dislikeReasonsArray;
@property BOOL enableDynamicTheme;

- (id)p_dislikeTitleStringForKey:(id)a0 withSubTitle:(id)a1;
- (id)p_generateVideoTagLevel2;
- (id)p_dislikeTitleStringForKey:(id)a0;
- (void)loadDislikeReasonModelsWithType:(unsigned long long)a0;
- (void).cxx_destruct;

@end
