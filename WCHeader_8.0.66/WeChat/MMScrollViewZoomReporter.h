@class NSString, NSMutableArray;

@interface MMScrollViewZoomReporter : NSObject

@property (nonatomic) long long scene;
@property (nonatomic) long long mediaType;
@property (retain, nonatomic) NSMutableArray *actionAndScales;
@property (nonatomic) BOOL isDoubleTapZoom;
@property (retain, nonatomic) NSString *snsId;
@property (nonatomic) long long picIndex;

- (id)initWithScene:(long long)a0 mediaType:(long long)a1;
- (void)recordWithScale:(double)a0;
- (void)reportIfNeeded;
- (void)doubleTapZoom;
- (void)scrollViewDidEndZooming:(id)a0 withView:(id)a1 atScale:(double)a2;
- (void)onScrollViewDisappearFromScreen;
- (void)_clearReportData;
- (void).cxx_destruct;

@end
