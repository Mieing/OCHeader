@class NSString, AWETabBarElementButtonInfo;

@interface AWETabBarElementButtonViewModel : NSObject

@property (copy, nonatomic) NSString *identify;
@property (retain, nonatomic) AWETabBarElementButtonInfo *foldInfo;
@property (retain, nonatomic) AWETabBarElementButtonInfo *unFoldInfo;
@property (nonatomic) BOOL isSelected;
@property (copy, nonatomic) id /* block */ clickBlock;

- (void).cxx_destruct;

@end
