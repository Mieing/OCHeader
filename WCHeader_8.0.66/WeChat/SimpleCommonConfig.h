@class NSMutableArray;

@interface SimpleCommonConfig : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *itemList;

+ (id)_getValueDetailWithName:(id)a0 array:(id)a1;
+ (void)initialize;

- (void)setItemList:(id)a0;
- (id)itemList;
- (id)streamWordingConfig;
- (id)followTabEndWording;
- (id)friendTabEndWording;
- (id)_getCommonValueArrayWithKey:(id)a0;

@end
