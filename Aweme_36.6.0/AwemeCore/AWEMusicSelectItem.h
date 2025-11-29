@class UIImage, NSString;
@protocol ACCMusicModelProtocol;

@interface AWEMusicSelectItem : NSObject

@property (nonatomic) BOOL isRecommended;
@property (retain, nonatomic) id<ACCMusicModelProtocol> musicModel;
@property (nonatomic) long long status;
@property (nonatomic) BOOL fromLibrary;
@property (readonly, nonatomic) double songTimeLength;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) BOOL supportLongGesture;
@property (retain, nonatomic) UIImage *longGesturePopoverImage;
@property (retain, nonatomic) NSString *longGestureDescription;
@property (nonatomic) unsigned long long itemType;
@property (copy, nonatomic) id /* block */ longGesturePopoverShowTrackHandler;

+ (id)itemsForMusicList:(id)a0 currentPublishModel:(id)a1 musicListExiestMusicOnTop:(BOOL)a2 ignoreLocalScannedTransAsset:(BOOL)a3 shouldTransMusicItem:(BOOL)a4;
+ (BOOL)canTransMusicItem:(id)a0 shouldTransMusicItem:(BOOL)a1;
+ (id)itemsForMusicList:(id)a0 currentPublishModel:(id)a1;
+ (id)localURLForMusicModel:(id)a0;
+ (BOOL)fileExistAtPath:(id)a0;
+ (id)musicItemForModel:(id)a0 currentPublishModel:(id)a1 musicStartTime:(double)a2;
+ (id)musicItemForLocalMusicModel:(id)a0 currentPublishModel:(id)a1 ignoreLocalScannedTransAsset:(BOOL)a2;
+ (id)musicExiestMusicOnTop:(id)a0 currentPublishModel:(id)a1;

- (void)setupMusicSelectItem;
- (void).cxx_destruct;
- (id)init;

@end
