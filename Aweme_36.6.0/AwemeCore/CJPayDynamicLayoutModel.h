@class NSArray;

@interface CJPayDynamicLayoutModel : NSObject

@property (nonatomic) double topMargin;
@property (nonatomic) double bottomMargin;
@property (nonatomic) double leftMargin;
@property (nonatomic) double rightMargin;
@property (nonatomic) double forceHeight;
@property (nonatomic) double forceWidth;
@property (nonatomic) BOOL useCenterX;
@property (retain, nonatomic) NSArray *clickViews;

- (id)initModelWithTopMargin:(double)a0 bottomMargin:(double)a1 leftMargin:(double)a2 rightMargin:(double)a3;
- (void).cxx_destruct;

@end
