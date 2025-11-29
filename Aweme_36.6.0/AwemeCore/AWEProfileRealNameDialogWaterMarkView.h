@class NSString, NSMutableArray;

@interface AWEProfileRealNameDialogWaterMarkView : UIView

@property (retain, nonatomic) NSMutableArray *layers;
@property (copy, nonatomic) NSString *text;

- (id)initWithWaterMarkText:(id)a0;
- (void)configWaterMarks;
- (void)removeTextLayers;
- (id)waterMarkFont;
- (id)createTextLayer;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)addToContainerView:(id)a0;

@end
