@class NSString;

@interface AWEIMCollectCardContentProps : AWEIMUIViewPresenterProps

@property (copy, nonatomic) id /* block */ tapBlock;
@property (nonatomic) struct CGSize { double width; double height; } containerSize;
@property (nonatomic) unsigned long long cardStyle;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *bgURLString;
@property (nonatomic) BOOL showDarkView;

- (void).cxx_destruct;

@end
