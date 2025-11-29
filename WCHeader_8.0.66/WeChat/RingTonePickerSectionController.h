@class NSString, RingToneDetail, RingToneRecommendReporter_23604;
@protocol RingTonePickerSectionControllerDelegate;

@interface RingTonePickerSectionController : MMTListSectionController <RingTonePickCollectionViewCellDelegate>

@property (retain, nonatomic) RingToneDetail *ring;
@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) RingToneRecommendReporter_23604 *reporter;
@property (weak, nonatomic) id<RingTonePickerSectionControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didUpdateToObject:(id)a0;
- (id)cellForItemAtIndex:(long long)a0 section:(long long)a1;
- (double)heightForRowAtIndex:(long long)a0;
- (double)heightForHeader;
- (id)viewForHeader;
- (void)didSelectRowAtIndex:(long long)a0;
- (void)willDisplayCell:(id)a0 forRowAtIndex:(long long)a1;
- (void)jumpToAuthorPage:(id)a0;
- (void)onExclusiveRingPlay:(id)a0 isToPlay:(BOOL)a1;
- (void)jumpToPlayerPage:(id)a0 index:(long long)a1;
- (void).cxx_destruct;

@end
