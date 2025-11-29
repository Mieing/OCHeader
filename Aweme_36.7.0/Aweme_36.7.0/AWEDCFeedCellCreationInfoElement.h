@class AWEDCFeedCreationUserAvatarResource, AWEDCFeedCreationUserNameResource, AWEDCFeedCreationDiggResource, UIView, NSMutableArray;

@interface AWEDCFeedCellCreationInfoElement : AWEDCFeedBaseCellElement

@property (retain, nonatomic) AWEDCFeedCreationUserAvatarResource *avatarResource;
@property (retain, nonatomic) AWEDCFeedCreationUserNameResource *nameResource;
@property (retain, nonatomic) AWEDCFeedCreationDiggResource *diggResource;
@property (retain, nonatomic) UIView *rightResourceView;
@property (retain, nonatomic) NSMutableArray *resourceArray;

+ (BOOL)canShowWithAwemeModel:(id)a0 context:(id)a1;
+ (double)heightWithCellWidth:(double)a0 awemeModel:(id)a1 context:(id)a2;
+ (long long)elementStyle;

- (void)configWithModel:(id)a0 context:(id)a1;
- (void)themeDidChange:(long long)a0;
- (id)classNameWithReferString;
- (void)configAvatarResourceWithModel:(id)a0;
- (void)configNameResourceWithModel:(id)a0;
- (void)configResourcePlaceWithModel:(id)a0;
- (BOOL)shouldHiddenResourceWithType:(long long)a0;
- (void)addDiggViewIfNeededWithConfig:(id)a0 model:(id)a1;
- (void)addCustomViewIfNeededWithConfig:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)reset;

@end
