@class UIImageView, UILabel, NSString;

@interface AFDUserWorkStoryTagView : UIView <AFDUserWorkStoryTagViewProtocol>

@property (retain, nonatomic) UIImageView *storyImageView;
@property (retain, nonatomic) UILabel *storyLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)constructConstraints;
- (void)configWithAweme:(id)a0;
- (double)widthWithAweme:(id)a0 maxWidth:(double)a1;
- (id)p_storyTagTextWithAweme:(id)a0;
- (long long)postCountWithModel:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
