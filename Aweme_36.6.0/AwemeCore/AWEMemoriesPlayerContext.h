@class AWEMemoriesPlayerTileModel, NSString, NSMutableSet, UIScrollView, UICollectionViewCell;

@interface AWEMemoriesPlayerContext : NSObject

@property (retain, nonatomic) NSMutableSet *consumedPic;
@property (retain, nonatomic) NSMutableSet *consumedMemoriesRecall;
@property (nonatomic) BOOL isAppActive;
@property (nonatomic) BOOL isListVCActive;
@property (weak, nonatomic) UIScrollView *initiativeScrollView;
@property (nonatomic) BOOL thumbnailScrollAnimation;
@property (nonatomic) BOOL thumbnailScrolling;
@property (nonatomic) BOOL thumbnailDragging;
@property (nonatomic) long long playerStatus;
@property (retain, nonatomic) AWEMemoriesPlayerTileModel *currentPlayerTileModel;
@property (retain, nonatomic) UICollectionViewCell *currentPlayerCell;
@property (nonatomic) long long currentPlayerIndex;
@property (nonatomic) BOOL isShowingSharePanel;
@property (nonatomic) BOOL shouldCleanScreen;
@property (nonatomic) BOOL shouldCleanScreenForActiveSlide;
@property (nonatomic) BOOL isFirstShow;
@property (nonatomic) BOOL playerCovered;
@property (nonatomic) BOOL autoPlayFirst;
@property (copy, nonatomic) NSString *vvType;
@property (copy, nonatomic) NSString *trackTitle;
@property (copy, nonatomic) NSString *onlyThemes;
@property (copy, nonatomic) NSString *enterMethod;
@property (nonatomic) BOOL lastSectionHasShow;
@property (readonly, nonatomic) long long consumedPicCount;
@property (readonly, nonatomic) long long consumedMemoriesRecallCount;

- (void)recordPlayIndex:(long long)a0;
- (void)recordMemoriesRecallPlayIndex:(long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
