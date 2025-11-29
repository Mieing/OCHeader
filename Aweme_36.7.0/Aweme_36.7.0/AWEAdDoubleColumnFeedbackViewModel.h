@class NSArray, NSString, AWEAwemeModel;

@interface AWEAdDoubleColumnFeedbackViewModel : NSObject <AWEAdDoubleColumnFeedbackVMProtocol>

@property (copy, nonatomic) NSArray *collectionDataSource;
@property (nonatomic) double containerWidth;
@property (nonatomic) double containerHeight;
@property (nonatomic) double panelWidth;
@property (nonatomic) double panelHeight;
@property (nonatomic) double collectionViewWidth;
@property (nonatomic) double collectionViewHeight;
@property (nonatomic) double headerHeight;
@property (nonatomic) double cellWidth;
@property (nonatomic) double cellHeight;
@property (nonatomic) long long index;
@property (retain, nonatomic) AWEAwemeModel *currentModel;
@property (copy, nonatomic) id /* block */ feedbackBlock;
@property (copy, nonatomic) id /* block */ afterDismissFeedbackBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)referString;
+ (id)enterMethod;
+ (id)logScenePrefix;

- (void)sendDislikeRequest:(id)a0 extraInfo:(id)a1;
- (id)getItemTitleForIndexPath:(id)a0;
- (void)feedbackWithIndexPath:(id)a0;
- (id)getSectionTitle:(long long)a0;
- (double)headerHeightForSection:(long long)a0;
- (double)cellWidthForIndexPath:(id)a0;
- (void)setupUIInfo;
- (void)configDataSource:(id)a0;
- (void)sendReportRequestWithItem:(id)a0;
- (long long)numberOfItemsInSection:(long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
