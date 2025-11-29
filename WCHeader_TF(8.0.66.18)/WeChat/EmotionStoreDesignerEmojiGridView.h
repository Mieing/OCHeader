@class NSArray;
@protocol EmotionStoreDesignerEmojiGridViewDelegate;

@interface EmotionStoreDesignerEmojiGridView : MMImageGridView {
    NSArray *m_designerEmojiCells;
    long long m_numOfItemInOneLine;
}

@property (weak, nonatomic) id<EmotionStoreDesignerEmojiGridViewDelegate> delegate;
@property (retain, nonatomic) NSArray *emojiInfos;
@property (nonatomic) long long maxLineNum;
@property (nonatomic) long long maxNumOfEmojiToShow;

+ (id)configEmojiCell:(id)a0;
+ (void)calNumOfItemInOneLine:(long long *)a0 ItemSideLen:(double *)a1 ForTotalWidth:(double)a2;

- (void)adjustForWidth:(double)a0;
- (void)useDefaultSettingForDesignerProfile;
- (void)configDesignerEmojiCellsForEmojis:(id)a0;
- (void)adjustSubviewsForTotalWidth:(double)a0;
- (void)onEmojiCellClicked:(id)a0;
- (void).cxx_destruct;

@end
