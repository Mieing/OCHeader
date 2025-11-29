@class NSMutableArray, QTextStyle;

@interface QRouteOverlay : QPolyline

@property (retain, nonatomic) NSMutableArray *arrStyle;
@property (retain, nonatomic) NSMutableArray *arrColor;
@property (retain, nonatomic) NSMutableArray *arrText;
@property (retain, nonatomic) QTextStyle *textStyle;

- (void).cxx_destruct;

@end
