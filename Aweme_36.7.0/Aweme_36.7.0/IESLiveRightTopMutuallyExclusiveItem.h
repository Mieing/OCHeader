@class NSString, UIView;

@interface IESLiveRightTopMutuallyExclusiveItem : NSObject

@property (nonatomic) long long priority;
@property (retain, nonatomic) NSString *identifier;
@property (weak, nonatomic) UIView *insertView;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (copy, nonatomic) id /* block */ removeBlock;
@property (copy, nonatomic) id /* block */ showBlock;

- (void).cxx_destruct;
- (id)init;

@end
