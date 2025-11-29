@interface MeasureParam : NSObject

@property (readonly, nonatomic) double width;
@property (readonly, nonatomic) long long widthMode;
@property (readonly, nonatomic) double height;
@property (readonly, nonatomic) long long heightMode;

- (id)initWithWidth:(double)a0 WidthMode:(long long)a1 Height:(double)a2 HeightMode:(long long)a3;
- (id)initWithWidth:(double)a0 WdithMode:(long long)a1 Height:(double)a2 HeightMode:(long long)a3;

@end
