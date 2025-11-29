@class NSString;

@interface AWEIMLynxDynamicCardContentProps : AWEIMUIViewPresenterProps

@property (copy, nonatomic) NSString *lynxURL;
@property (copy, nonatomic) NSString *fallbackURL;
@property (nonatomic) struct CGSize { double width; double height; } preferredLynxViewSize;
@property (nonatomic) long long containerType;
@property (copy, nonatomic) id /* block */ didUpdateCellContentSizeBlock;

- (void).cxx_destruct;

@end
