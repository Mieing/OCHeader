@interface HalfContainerOffset : NSObject

@property (nonatomic) double statusBar;
@property (nonatomic) double naviBar;
@property (nonatomic) double screenWidth;
@property (nonatomic) double screenHeight;
@property (nonatomic) double distance;

- (double)realHeight;
- (double)realHeightWithStatusBar;
- (id)initOffSetWithDic:(id)a0;

@end
