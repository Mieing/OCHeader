@class EcClient, EcAlbum, NSString;

@interface AWECloudAlbumDetailInputData : NSObject <AWECloudAlbumDetailInputDataProtocol>

@property (retain, nonatomic) EcClient *client;
@property (retain, nonatomic) EcAlbum *album;
@property (nonatomic) double cellSpacing;
@property (nonatomic) struct CGSize { double width; double height; } cellSize;
@property (nonatomic) double footerViewHeight;
@property (nonatomic) double animationDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)defaultCellSpacing;
+ (struct CGSize { double x0; double x1; })defaultCellSize;

- (id)taskKey;
- (void).cxx_destruct;
- (id)init;

@end
