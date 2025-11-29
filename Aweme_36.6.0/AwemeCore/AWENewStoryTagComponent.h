@class NSArray, AWEStoryTagView, NSString, AWEPlayInteractionBaseElement;

@interface AWENewStoryTagComponent : NSObject <AFDVideoTagsProtocol>

@property (retain, nonatomic) AWEStoryTagView *storyTagView;
@property (weak, nonatomic) AWEPlayInteractionBaseElement *clickDelegate;
@property (weak, nonatomic) NSArray *currentActivatedComponents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)needShowWithContext:(id)a0;

- (long long)tagWidth;
- (BOOL)currentTagNeedPlaceHolder;
- (void)onStoryTagViewClicked:(id)a0;
- (void)updateTagForLargeFontAdaptIfNeeded:(id)a0 withFontSize:(double)a1;
- (void)updateWithCloseFriendsModel:(id)a0;
- (long long)getMomentVisibilityWithModel:(id)a0;
- (void).cxx_destruct;
- (void)updateWithModel:(id)a0;
- (id)tagView;

@end
