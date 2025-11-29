@class NSString, AWEProfileHeaderContext;

@interface AWEProfileHeaderProfileRecommendSectionViewModel : AWEBaseListSectionViewModel <AWEProfileHeaderSectionViewModelProtocol>

@property (retain, nonatomic) AWEProfileHeaderContext *context;
@property (nonatomic) BOOL isRelationReasonTracked;
@property (nonatomic) BOOL isPreviousAndServerRelationSame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canShowMoreMenueWithContext:(id)a0;
+ (BOOL)showProfileRecommendViewWithContext:(id)a0;

- (void)configWithContext:(id)a0;
- (id)privacyMapContext:(id)a0;
- (id)padService;
- (double)topPaddingWithUpperSection:(long long)a0;
- (double)bottomPaddingWithLowerSection:(long long)a0;
- (void)trackForRelationReason;
- (id)recommendReasonShowText:(id)a0 needTrack:(BOOL)a1;
- (id)relationDescriptionAttachmentIconWithContext:(id)a0;
- (void)didTapProfileRecommendView;
- (void)__trackRecReasonComparison;
- (id)reasonStatus:(id)a0;
- (id)reasonPrevious:(id)a0;
- (id)reasonServer:(id)a0;
- (id)recommendReasonShowTextOriginal:(id)a0 needTrack:(BOOL)a1;
- (void)trackForRefactorConsistency:(id)a0 refactoredResult:(id)a1 user:(id)a2;
- (void)__trackRecommenRreasonWithPrevious:(id)a0 server:(id)a1;
- (BOOL)shouldShowReasonStatus:(id)a0;
- (void)__trackRecommenReasonIfNeededWithContext:(id)a0 withEventName:(id)a1;
- (BOOL)canShowMoreMenue;
- (BOOL)canHidePost;
- (void)__showProfileMenuWithMethod:(unsigned long long)a0;
- (void).cxx_destruct;
- (long long)sectionType;
- (struct CGSize { double x0; double x1; })sectionSize;

@end
