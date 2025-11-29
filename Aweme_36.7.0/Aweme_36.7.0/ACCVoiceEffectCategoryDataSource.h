@class NSString, NSMutableArray;
@protocol ACCVoiceEffectDataSourceAdapter;

@interface ACCVoiceEffectCategoryDataSource : NSObject

@property (copy, nonatomic) id /* block */ dataReloadCallback;
@property (weak, nonatomic) id<ACCVoiceEffectDataSourceAdapter> adapter;
@property (retain, nonatomic) NSString *panelID;
@property (nonatomic) unsigned long long index;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSMutableArray *items;
@property (retain, nonatomic) NSMutableArray *oriItems;

- (id)findItem:(id)a0;
- (id)locateDefaultID:(id)a0;
- (void).cxx_destruct;
- (id)itemAtIndex:(unsigned long long)a0;
- (void)updateItems:(id)a0;

@end
