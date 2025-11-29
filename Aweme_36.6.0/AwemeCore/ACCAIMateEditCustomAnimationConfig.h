@class UIImageView, UIView;

@interface ACCAIMateEditCustomAnimationConfig : NSObject

@property (nonatomic) double bottomHeight;
@property (nonatomic) double duration;
@property (nonatomic) unsigned long long animationOptions;
@property (nonatomic) double startTime;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } smallContentFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } snapshotSmallFrame;
@property (retain, nonatomic) UIImageView *placeholderImageView;
@property (retain, nonatomic) UIView *placeholderContainer;
@property (retain, nonatomic) UIImageView *aiTextStickerSnapView;
@property (retain, nonatomic) UIView *inputContainerView;
@property (copy, nonatomic) id /* block */ updateLayoutBlock;
@property (copy, nonatomic) id /* block */ insertCompletion;

- (id)initWithPlaceholderImageView:(id)a0 placeholderContainer:(id)a1 inputContainerView:(id)a2;
- (void).cxx_destruct;
- (id)description;

@end
