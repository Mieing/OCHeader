@class NSString;
@protocol WCFinderNetPagViewDelegate;

@interface WCFinderNetPagView : PAGView

@property (copy, nonatomic) NSString *defaultPagResPath;
@property (copy, nonatomic) NSString *netPagUrl;
@property (copy, nonatomic) NSString *targetMd5;
@property (weak, nonatomic) id<WCFinderNetPagViewDelegate> delegate;
@property (nonatomic) BOOL disableAutoUpate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithDefaultPagResPath:(id)a0 netPagURL:(id)a1 targetMd5:(id)a2;
- (void)loadFileWithPath:(id)a0;
- (void).cxx_destruct;

@end
