@class NSArray, AWEStoryTagView, NSString, AWEPlayInteractionBaseElement;

@interface AWEStoryTagComponent : NSObject <AFDVideoTagsProtocol>

@property (retain, nonatomic) AWEStoryTagView *storyTagView;
@property (weak, nonatomic) AWEPlayInteractionBaseElement *clickDelegate;
@property (weak, nonatomic) NSArray *currentActivatedComponents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)needShowWithContext:(id)a0;
+ (BOOL)enableQuickStory;

- (id)referString;
- (long long)tagWidth;
- (BOOL)currentTagNeedPlaceHolder;
- (void)onStoryTagViewClicked:(id)a0;
- (BOOL)shouldShowAlbumTextWithModel:(id)a0;
- (void)updateSlidesTagWithModel:(id)a0 uiConfigModel:(id)a1;
- (void)updateSingleImageOriginTextWithUIConfigModel:(id)a0;
- (void)updateAlbumTextWithModel:(id)a0 uiConfigModel:(id)a1;
- (void)updateMomentCombinationTagWithModel:(id)a0 uiConfigModel:(id)a1;
- (void).cxx_destruct;
- (void)updateWithModel:(id)a0;
- (id)tagView;

@end
