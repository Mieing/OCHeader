@class NSString, UIColor;

@interface WCTagItem : NSObject

@property (nonatomic) long long type;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (retain, nonatomic) NSString *imageName;
@property (retain, nonatomic) UIColor *imageColor;
@property (copy, nonatomic) id /* block */ imageCreateAction;
@property (copy, nonatomic) id /* block */ itemViewCreateAction;

- (id)initWithType:(long long)a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)initWithType:(long long)a0 size:(struct CGSize { double x0; double x1; })a1 itemViewCreateAction:(id /* block */)a2;
- (id)initWithType:(long long)a0 size:(struct CGSize { double x0; double x1; })a1 imageCreateAction:(id /* block */)a2;
- (id)initWithType:(long long)a0 size:(struct CGSize { double x0; double x1; })a1 imageName:(id)a2 imageColor:(id)a3;
- (id)initWithType:(long long)a0 size:(struct CGSize { double x0; double x1; })a1 imageUrl:(id)a2;
- (double)getWidthByHeight:(double)a0;
- (void).cxx_destruct;

@end
