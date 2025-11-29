@class NSString, UIView;
@protocol IESECShopLayoutManager;

@interface IESECShopLayoutBaseItem : NSObject

@property (weak, nonatomic) UIView *view;
@property (copy, nonatomic) NSString *viewType;
@property (copy, nonatomic) id /* block */ constraintMaker;
@property (weak, nonatomic) UIView *containerView;
@property (nonatomic) BOOL isLayoutContainer;
@property (weak, nonatomic) id<IESECShopLayoutManager> layoutManager;

- (void).cxx_destruct;

@end
