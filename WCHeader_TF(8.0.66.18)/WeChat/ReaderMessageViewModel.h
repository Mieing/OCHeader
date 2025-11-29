@class NSArray, CContact, NSString, UIImage, NSMutableArray, TingItem;

@interface ReaderMessageViewModel : BaseMessageViewModel <RichTextLayoutDelegate, BrandPaySubcribeMgrExt, MMWebImageViewDelegate> {
    struct CGSize { double width; double height; } m_titleViewSize;
    NSMutableArray *m_titleStyles;
    struct CGSize { double width; double height; } m_digestViewSize;
    NSMutableArray *m_digestStyles;
    NSArray *m_arrBtnList;
    double m_messageViewWidth;
    double m_digestViewMaxHeight;
    BOOL m_isPaySubcribeOpen;
    BOOL m_bIsPaid;
    NSString *m_pageIdentifier;
}

@property (readonly, nonatomic) NSArray *readerWraps;
@property (readonly, nonatomic) NSArray *nodeBtnList;
@property (readonly, nonatomic) BOOL isShowReadAll;
@property (readonly, nonatomic) BOOL isShowHeadImageAndNickname;
@property (readonly, nonatomic) BOOL isForbidForward;
@property (readonly, nonatomic) CContact *brandContact;
@property (readonly, nonatomic) double messageNodeViewWidth;
@property (readonly, nonatomic) double messageNodeViewHeight;
@property (readonly, nonatomic) NSString *titleText;
@property (readonly, nonatomic) NSString *coverImageURL;
@property (readonly, nonatomic) double coverImageHeight;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } titleViewSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } digestViewSize;
@property (readonly, nonatomic) NSMutableArray *titleStyles;
@property (readonly, nonatomic) NSMutableArray *digestStyles;
@property (readonly, nonatomic) double limitTitleWidth;
@property (readonly, nonatomic) unsigned long long limitLineNumber;
@property (readonly, nonatomic) BOOL isPayContent;
@property (readonly, nonatomic) BOOL isPaid;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } payTagSize;
@property (readonly, nonatomic) UIImage *paySubcribeTagImage;
@property (nonatomic) unsigned long long viewScale;
@property (readonly, nonatomic) double collapsedScale;
@property (readonly, nonatomic) double collapsedAlpha;
@property (nonatomic) BOOL forceHideComplaintButton;
@property (readonly, nonatomic) TingItem *tingItem;
@property (nonatomic) BOOL hasExposure;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;
+ (id)makeHighlightedLabel:(id)a0 previewInfo:(id)a1;

- (id)cellViewClassName;
- (id)initWithMessageWrap:(id)a0 contact:(id)a1 chatContact:(id)a2;
- (struct CGSize { double x0; double x1; })measureContentViewSize:(struct CGSize { double x0; double x1; })a0;
- (id)accessibilityDescription;
- (BOOL)isDisableEditMode;
- (BOOL)isReaderWrapWeappJumpType;
- (void)initPaidStateIfNeed;
- (void)resetTextSize;
- (double)insideWidth;
- (struct CGSize { double x0; double x1; })calculateTitleViewSize;
- (BOOL)hasTitleTag;
- (struct CGSize { double x0; double x1; })titleTagImageSize;
- (struct CGSize { double x0; double x1; })calculateDigestViewSize;
- (id)getSmallVideoImage;
- (id)getBigVideoImage;
- (id)getTitleString:(id)a0 bBig:(BOOL)a1 bGray:(BOOL)a2;
- (id)timeToStr:(id)a0;
- (double)digestViewMaxHeight;
- (BOOL)shouldShowFooterView;
- (BOOL)shouldOpenNewLineAtY:(double)a0 withLineHeight:(double)a1 richTextView:(id)a2;
- (void)onUpdateMPPagePaySubcribeHasPaidWithPageIdentifier:(id)a0 fullUrl:(id)a1;
- (void)updatePayStatus:(BOOL)a0;
- (void)updateTitle;
- (id)makeSearchPreview:(id)a0;
- (id)rightCoverImageViewWithUrl:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void).cxx_destruct;

@end
