@class NSArray, UIColor;

@interface AWEIMEclipseOverlapedViewConfig : NSObject

@property (copy, nonatomic) NSArray *imgItemList;
@property (copy, nonatomic) id /* block */ lastItemtappedBlock;
@property (nonatomic) double eachEclipseRadius;
@property (nonatomic) double overlapDistance;
@property (nonatomic) double borderWidth;
@property (retain, nonatomic) UIColor *borderColor;

- (id)initWithImgItemList:(id)a0 lastItemtappedBlock:(id /* block */)a1 eachEclipseRadius:(double)a2 overlapDistance:(double)a3 borderWidth:(double)a4 borderColor:(id)a5;
- (void).cxx_destruct;

@end
