@class NSString, UIView;

@interface CJPayClickEventModel : NSObject

@property (copy, nonatomic) NSString *text;
@property (nonatomic) struct CGPoint { double x; double y; } point;
@property (retain, nonatomic) UIView *view;
@property (copy, nonatomic) NSString *viewClassNameDesc;

- (void).cxx_destruct;
- (id)trackData;

@end
