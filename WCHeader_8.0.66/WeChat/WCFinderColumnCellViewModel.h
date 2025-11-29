@class WCFinderFeedContentVM, WCFinderColumnCellVMDataSource;
@protocol WCFinderColumnCellViewModelDelegate;

@interface WCFinderColumnCellViewModel : NSObject

@property (retain, nonatomic) WCFinderFeedContentVM *contentVM;
@property (retain, nonatomic) WCFinderColumnCellVMDataSource *dataSource;
@property (nonatomic) double firstExposureTime;
@property (nonatomic) int fromScene;
@property (nonatomic) int toScene;
@property (weak, nonatomic) id<WCFinderColumnCellViewModelDelegate> delegate;

+ (BOOL)isMulticardType;
+ (void)updateContentVMPlayingPositionFrom:(id)a0 to:(id)a1;

- (void)updateWithContentVM:(id)a0;
- (void)recordFirstDisplay;
- (id)allTids;
- (unsigned long long)dataCount;
- (id)contentVMAtIndex:(unsigned long long)a0;
- (id)getFeedArray;
- (id)title;
- (id)columnInfo;
- (unsigned long long)currentFocusIndex;
- (void)setCurrentFocusIndex:(unsigned long long)a0;
- (void)fetchMoreData;
- (BOOL)isFetchingData;
- (BOOL)hasMore;
- (id)getReportInfo;
- (id)loadingState;
- (void).cxx_destruct;

@end
