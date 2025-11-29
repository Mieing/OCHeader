@class NSArray, QTextStyle;
@protocol QTextChangeDelegate;

@interface QText : NSObject {
    struct { double x0; double x1; } *_points;
    unsigned long long _pointCount;
}

@property (retain, nonatomic) NSArray *segments;
@property (nonatomic) int routeId;
@property (weak, nonatomic) id<QTextChangeDelegate> delegate;
@property (retain, nonatomic) QTextStyle *style;

- (id)initWithSegments:(id)a0;
- (void).cxx_destruct;

@end
