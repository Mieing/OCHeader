@class NSString, UIFont;

@interface MMFinderLiveCommonGuideTipsParams : NSObject

@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) long long numberOfLines;
@property (nonatomic) long long triangleOrientation;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (nonatomic) struct CGSize { double width; double height; } arrowSize;
@property (copy, nonatomic) id /* block */ removerWhenOtherTouched;

- (id)init;
- (void).cxx_destruct;

@end
