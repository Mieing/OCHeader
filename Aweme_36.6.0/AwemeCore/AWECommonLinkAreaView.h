@class NSArray, AWEUserModel;

@interface AWECommonLinkAreaView : UIView

@property (copy, nonatomic) NSArray *linkList;
@property (retain, nonatomic) AWEUserModel *userModel;
@property (nonatomic) double hitTestBottomExpand;

- (void)linkLabelClicked:(id)a0;
- (double)configWithContext:(id)a0;
- (id)__iconNameForItemType:(unsigned long long)a0;
- (void).cxx_destruct;

@end
