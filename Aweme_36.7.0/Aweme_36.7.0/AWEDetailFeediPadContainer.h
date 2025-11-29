@interface AWEDetailFeediPadContainer : AWEArchContainer

+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEPadMixVideoAdapterClass;

- (id)aAWEPadModuleAdapter;
- (void)setupContainer;
- (id)aAWEPadMixVideoAdapter;
- (void)layoutTableView:(id)a0;
- (void)configPreloadCellWithData:(id)a0;

@end
