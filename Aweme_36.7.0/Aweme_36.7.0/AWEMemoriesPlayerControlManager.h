@class NSString, UICollectionViewCell, UIView;
@protocol AWEMemoriesPlayerThumbnailLayoutService, AWEThemeVideoTemplateService;

@interface AWEMemoriesPlayerControlManager : NSObject <AWEMemoriesPlayerControlProtocol>

@property (copy, nonatomic) id /* block */ playHandler;
@property (copy, nonatomic) id /* block */ pauseHandler;
@property (copy, nonatomic) id /* block */ scrollHandler;
@property (copy, nonatomic) id /* block */ blockAutoScroll;
@property (copy, nonatomic) id /* block */ cleanHandler;
@property (copy, nonatomic) id /* block */ cleanForActiveSlideHandler;
@property (copy, nonatomic) id /* block */ enterThemeVideoEditHandler;
@property (weak, nonatomic) id<AWEThemeVideoTemplateService> videoTemplateService;
@property (weak, nonatomic) id<AWEMemoriesPlayerThumbnailLayoutService> thumbnailLayoutService;
@property (nonatomic) long long currentIndex;
@property (weak, nonatomic) UICollectionViewCell *currentCell;
@property (weak, nonatomic) UIView *playerView;
@property (nonatomic) BOOL playerCovered;
@property (nonatomic) BOOL playerScrolling;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scrollToIndex:(unsigned long long)a0;
- (void)pauseByManual:(BOOL)a0;
- (void)shouldCleanScreen:(BOOL)a0;
- (void)playByManual:(BOOL)a0;
- (void)shouldBlockAutoScroll:(id /* block */)a0;
- (void)enterThemeVideoEdit:(id /* block */)a0;
- (void)shouldCleanScreenForSlideProgress:(BOOL)a0;
- (void).cxx_destruct;

@end
