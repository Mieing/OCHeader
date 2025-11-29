@interface AWEMusicDetailFeedListUIConfig : NSObject

@property (nonatomic) long long numberOfCellPerRow;
@property (nonatomic) struct CGSize { double width; double height; } cellSize;
@property (nonatomic) struct CGSize { double width; double height; } lastCellSize;

@end
