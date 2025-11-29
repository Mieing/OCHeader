@class NSDictionary, NSString;

@interface AWESearchScanWaterfallVideoCellController : AWESearchScanWaterfallBaseCellController <AWESearchVideoViewPlayerDelegate, AWESearchCachalotCardViewProtocol>

@property (retain, nonatomic) NSDictionary *logData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })sizeWithViewModel:(id)a0 width:(double)a1;
+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;

- (id)logExtraDict;
- (void)trackShow;
- (void)componentWillDisplay;
- (void)trackClick;
- (void)didStartShowing;
- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (void)cardSingleTapped:(id)a0;
- (id)getTrackBaseParams;
- (void).cxx_destruct;
- (id)transitionContext;
- (id)componentView;
- (void)updateWithViewModel:(id)a0;
- (void)updateWithModel:(id)a0;

@end
