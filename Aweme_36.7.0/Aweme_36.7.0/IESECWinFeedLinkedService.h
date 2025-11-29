@class NSString, IESECServiceProxy, UIScrollView, IESECWinContext;
@protocol IESECWinTabService, IESECWinDataService, IESECWinSplitService, IESECWinFeedMapperService, IESECWinLiveService;

@interface IESECWinFeedLinkedService : NSObject <UIGestureRecognizerDelegate, IESECWinFeedLinkedService> {
    IESECWinContext *_context;
    UIScrollView *_mainScrollView;
    UIScrollView *_subScrollView;
    struct CGPoint { double x; double y; } _mainOffset;
    struct CGPoint { double x; double y; } _subOffset;
}

@property (retain, nonatomic) IESECServiceProxy<IESECWinTabService> *tabService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinLiveService> *liveService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinDataService> *dataService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinSplitService> *splitService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinFeedMapperService> *mapper;
@property (nonatomic) unsigned long long scrollMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double headerHeight;
@property (nonatomic) double headerOffset;
@property (nonatomic) double backViewHeaderHeight;

- (void)bindMainScrollView:(id)a0;
- (void)bindSubScrollView:(id)a0;
- (void)configToStaticModel;
- (void)scrollSubScrollView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)splitScrollDistance;
- (void)calculateHeaderHeight;
- (void)setupMainScrollViewScrollMode;
- (void)setupSubScrollViewScrollMode;
- (void)setupScrollViewOffset;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)scrollViewDidScroll:(id)a0;

@end
