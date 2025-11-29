@class NSString, NSMutableDictionary, AWEProfileHeaderContext, NSAttributedString;

@interface AWEProfileHeaderSignatureSectionViewModel : AWEBaseListSectionViewModel <AWEUserMessage, AWEProfileHeaderSectionViewModelProtocol>

@property (retain, nonatomic) AWEProfileHeaderContext *context;
@property (nonatomic) long long penaltyLine;
@property (nonatomic) BOOL isFolded;
@property (nonatomic) BOOL liveTimeNoticeHadDisplayed;
@property (copy, nonatomic) NSString *userIdThatHadTrackedIntroShowEvent;
@property (retain, nonatomic) NSMutableDictionary *cacheHeightDict;
@property (nonatomic) double screenWidthCache;
@property (nonatomic) BOOL isDetailPageBlocked;
@property (nonatomic) double lastHeight;
@property (copy, nonatomic) NSAttributedString *attributedString;
@property (nonatomic) long long numberOfLines;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)signatureStringWithContext:(id)a0;
+ (long long)num4SignatureFoldPenaltyWithContext:(id)a0;
+ (BOOL)shouldShowEditBtnWithContext:(id)a0;

- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (void)configWithContext:(id)a0;
- (id)padService;
- (double)topPaddingWithUpperSection:(long long)a0;
- (double)bottomPaddingWithLowerSection:(long long)a0;
- (void)trackLiveTiemNoticeShowEvent;
- (void)eventTrack4IntroShowWithEnterMethod:(id)a0 status:(id)a1 textLines:(unsigned long long)a2;
- (void)eventTrackBarClickWithNoticeText:(id)a0;
- (void)eventTrackBarShowWithNoticeText:(id)a0;
- (void)resetLiveTiemNoticeShowEvent;
- (void)expandIntroLabel;
- (BOOL)needCleanCache;
- (id)eventTrackBarCommonParamsWithNoticeText:(id)a0;
- (long long)numberOfLinesFromPenaltyLine;
- (BOOL)checksSignatureHasFoldWith:(long long)a0;
- (void).cxx_destruct;
- (long long)sectionType;
- (id)init;
- (double)height;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })sectionSize;
- (double)containerWidth;

@end
