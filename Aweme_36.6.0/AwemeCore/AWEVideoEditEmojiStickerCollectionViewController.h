@class AWEEmojiStickerDataManager;

@interface AWEVideoEditEmojiStickerCollectionViewController : AWEVideoEditStickerCollectionViewController

@property (retain, nonatomic) AWEEmojiStickerDataManager *emojiStickerDataManager;

- (void)fetchDataWithCompletion:(id /* block */)a0;
- (id)logPB;
- (void)loadmoreEmoji;
- (id)cellAtIndexPath:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (long long)style;
- (void)configureCollectionView;
- (id)stickerType;

@end
