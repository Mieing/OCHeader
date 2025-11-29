@class NSArray, NSString, UILabel, AWEPlayInteractionBaseElement, UIView;

@interface AWEChapterTagComponent : NSObject <AFDVideoTagsProtocol>

@property (retain, nonatomic) UIView *chapterTagView;
@property (retain, nonatomic) UILabel *chapterTagLabel;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UILabel *nextChapterLabel;
@property (nonatomic) BOOL isChapterGuiding;
@property (nonatomic) BOOL isTimeStampLabelInAuthorElementHide;
@property (weak, nonatomic) AWEPlayInteractionBaseElement *clickDelegate;
@property (weak, nonatomic) NSArray *currentActivatedComponents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)needShowWithContext:(id)a0;
+ (BOOL)shouldShowIfVideoNoteExistsWithModel:(id)a0;
+ (BOOL)isChapterTagInDescriptionWithContext:(id)a0;
+ (id)getSpaceStringWithSpace:(double)a0;

- (long long)tagWidth;
- (void)onChapterTagLabelClicked:(id)a0;
- (void)onNextChapterLabelClicked:(id)a0;
- (BOOL)enableNextChapter;
- (BOOL)enableSmartChapterKeyPoint;
- (long long)chapterTagLabelWidth;
- (id)attributedStringWithChapterTagLabel:(id)a0 isGuide:(BOOL)a1;
- (void)observerVideoPlayedPeriod;
- (void)handleVideoPlayedPeriod;
- (void)chapterTagLabelDoLastAnimationIfNeeded;
- (void).cxx_destruct;
- (void)updateWithModel:(id)a0;
- (id)tagView;

@end
