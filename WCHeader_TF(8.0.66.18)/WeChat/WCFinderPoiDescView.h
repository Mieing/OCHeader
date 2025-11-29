@class NSMutableArray, MMUIButton;
@protocol WCFinderPoiDescViewDelegate;

@interface WCFinderPoiDescView : UIView

@property (weak, nonatomic) id<WCFinderPoiDescViewDelegate> delegate;
@property (nonatomic) double maxWidth;
@property (nonatomic) BOOL isExpandable;
@property (retain, nonatomic) MMUIButton *expandButton;
@property (retain, nonatomic) NSMutableArray *headItemArray;
@property (readonly, nonatomic) BOOL isExpand;

- (void)updateWithLineComponent:(id)a0;
- (BOOL)containTag:(id)a0;
- (id)genWordingComponentItems:(id)a0;
- (void)updateLayout;
- (void)onClickExpandButton;
- (void)setIsExpand:(BOOL)a0;
- (void).cxx_destruct;

@end
