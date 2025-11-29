@class EmoticonStoreItem;
@protocol MMStoreEmotionAllCellDelegate;

@interface MMStoreEmotionAllCell : MMStoreEmotionBaseAllCell

@property (readonly, nonatomic) EmoticonStoreItem *m_storeItem;
@property (weak, nonatomic) id<MMStoreEmotionAllCellDelegate> delegate;

- (BOOL)layoutStaticBtnWidth;
- (void)updateStoreItem:(id)a0 Entrance:(unsigned int)a1;
- (void)changeLayoutForFirstCell;
- (void)changeLayoutForLastCell;
- (void)updateCellCornerRadiusFor:(BOOL)a0 isFirst:(BOOL)a1;
- (void)onTapGetEmoticonBtnFor:(unsigned long long)a0;
- (void).cxx_destruct;

@end
