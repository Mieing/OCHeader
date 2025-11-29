@class NSArray, NSMutableDictionary;

@interface IESLiveKTVOrderPanelTabViewSectionModel : IESLiveKTVOrderPanelBaseSectionModel

@property (copy, nonatomic) NSArray *tabArray;
@property (retain, nonatomic) NSMutableDictionary *unReadSignalDict;
@property (retain, nonatomic) NSMutableDictionary *countSignalDict;
@property (nonatomic) long long selectedIndex;
@property (nonatomic) BOOL isSubTabStyle;

- (void)addUnreadSignalWithType:(long long)a0 signal:(id)a1;
- (void)addCountSignalWithType:(long long)a0 signal:(id)a1;
- (void)fetchTabArrayWithCompletion:(id /* block */)a0;
- (id)p_mapTabWithTabArray:(id)a0;
- (long long)p_cellListTypeWithTab:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)sectionType;
- (id)init;
- (Class)sectionClass;

@end
