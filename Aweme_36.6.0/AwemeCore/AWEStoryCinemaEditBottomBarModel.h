@class UIImage, NSString;

@interface AWEStoryCinemaEditBottomBarModel : AFDEditTextBottomBarViewModel <AWEStoryCinemaEditBottomBarModelProtocol>

@property (readonly, nonatomic) UIImage *privacyImage;
@property (readonly, nonatomic) NSString *privacyText;
@property (readonly, nonatomic) UIImage *filterImage;
@property (readonly, nonatomic) NSString *filterName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didTapStory25FilterButton;
- (void).cxx_destruct;
- (id)initWithServiceProvider:(id)a0;

@end
