@class UIColor, NSArray, NSString, UIView, NSMutableArray;
@protocol IESLiveKTVOrderPanelProtocol;

@interface IESLiveKTVOrderPanelViewModel : NSObject

@property (retain, nonatomic) NSMutableArray *completionBlocks;
@property (nonatomic) BOOL isFetching;
@property (retain, nonatomic) NSArray *sectionArray;
@property (nonatomic) long long minimumInteritemSpacing;
@property (nonatomic) long long minimumLineSpacing;
@property (nonatomic) struct CGSize { double width; double height; } estimatedItemSize;
@property (nonatomic) long long direction;
@property (nonatomic) BOOL scrollEnabled;
@property (retain, nonatomic) UIColor *backgroudColor;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (weak, nonatomic) UIView *containerView;
@property (retain, nonatomic) id<IESLiveKTVOrderPanelProtocol> panelModel;
@property (nonatomic) double lastCollectionViewY;
@property (nonatomic) long long selectedIndex;
@property (nonatomic) int firstLevelTab;
@property (nonatomic) double scrollHeight;
@property (copy, nonatomic) NSString *segTitle;
@property (copy, nonatomic) NSArray *tabsArray;
@property (nonatomic) BOOL needGesture;
@property (copy, nonatomic) id /* block */ didLoadListCallBack;
@property (copy, nonatomic) id /* block */ resortCallBack;

- (id)initWithSectionArray:(id)a0;
- (void)refreshSectionModel;
- (void)fetchTabArrayWithCompletion:(id /* block */)a0;
- (long long)getScrollHeight;
- (id)findSectionModelWithType:(unsigned long long)a0;
- (void)removeSectionWithType:(unsigned long long)a0;
- (void).cxx_destruct;

@end
