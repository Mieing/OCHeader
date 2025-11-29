@class NSDictionary, NSMutableSet;

@interface IESECLiveGoodsListTabEnhanceHandler : NSObject

@property (retain, nonatomic) NSDictionary *enhanceStyleDict;
@property (retain, nonatomic) NSMutableSet *showedTabUniqueIndex;

- (void)fetchSettings;
- (id)getEnhanceUIConfigByEnhancedType:(id)a0;
- (BOOL)shouldEnhanceOnceWithTabModel:(id)a0 config:(id)a1;
- (void)setupCell:(id)a0 skinConfig:(id)a1;
- (id)enhanceTabFontWithTabModel:(id)a0 isSelectedStatus:(BOOL)a1;
- (void)setupEnhanceCellSkin:(id)a0 tabModel:(id)a1 isSelectedStatus:(BOOL)a2;
- (void)didShowTabModel:(id)a0;
- (void)listViewClosed;
- (void).cxx_destruct;
- (id)init;

@end
