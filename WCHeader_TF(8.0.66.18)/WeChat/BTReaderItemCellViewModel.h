@class UIFont, NSString, MPPageRelatedInfo, UIImage, BTReaderMsgSectionData, ReaderWrap, NSMutableArray;
@protocol BTReaderItemCellViewModelDelegate;

@interface BTReaderItemCellViewModel : BTBaseItemCellViewModel {
    struct CGSize { double width; double height; } _titleSize;
    NSMutableArray *_titleLabelStyles;
    struct CGSize { double width; double height; } _digestSize;
    NSMutableArray *_digestLabelStyles;
    unsigned long long _position;
    MPPageRelatedInfo *_relatedInfo;
}

@property (nonatomic) BOOL isPaid;
@property (nonatomic) BOOL isPaySubcribeOpen;
@property (readonly, nonatomic) unsigned int itemIndex;
@property (readonly, nonatomic) ReaderWrap *readerWrap;
@property (readonly, nonatomic) NSString *coverImgURL;
@property (readonly, nonatomic) double titleMaxWidth;
@property (readonly, nonatomic) UIFont *titleFont;
@property (readonly, nonatomic) NSString *titleStr;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } titleSize;
@property (readonly, nonatomic) NSMutableArray *titleLabelStyles;
@property (readonly, nonatomic) unsigned long long titleLineNumber;
@property (readonly, nonatomic) BOOL exposeDigest;
@property (readonly, nonatomic) unsigned long long digestLineNumber;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } digestSize;
@property (readonly, nonatomic) double digestMaxWidth;
@property (readonly, nonatomic) UIFont *digestFont;
@property (readonly, nonatomic) UIFont *digestFoldFont;
@property (readonly, nonatomic) NSMutableArray *digestLabelStyles;
@property (readonly, nonatomic) BOOL hasLandingPage;
@property (readonly, nonatomic) unsigned long long position;
@property (readonly, nonatomic) BOOL isShowLargeCover;
@property (readonly, nonatomic) double normalCoverTopMargin;
@property (readonly, nonatomic) double normalCoverBottomMargin;
@property (readonly, nonatomic) BOOL isPayContent;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } payTagSize;
@property (readonly, nonatomic) UIImage *paySubcribeTagImage;
@property (readonly, nonatomic) MPPageRelatedInfo *relatedInfo;
@property (readonly, nonatomic) NSString *pageIdentifier;
@property (readonly, nonatomic) NSString *friendRelatedInfoStr;
@property (readonly, nonatomic) BOOL isShowFriendRelatedInfo;
@property (readonly, nonatomic) unsigned int friendReadCount;
@property (weak, nonatomic) id<BTReaderItemCellViewModelDelegate> delegate;
@property (weak, nonatomic) BTReaderMsgSectionData *sectionData;

+ (BOOL)canCreateViewModelWithReaderWrap:(id)a0 msgWrap:(id)a1;
+ (id)createModelWithReaderWrap:(id)a0 itemIndex:(unsigned int)a1 msgWrap:(id)a2 contact:(id)a3 viewWidth:(double)a4 relatedInfo:(id)a5;

- (id)itemViewClassName;
- (id)initWithReaderWrap:(id)a0 itemIndex:(unsigned int)a1 msgWrap:(id)a2 contact:(id)a3 viewWidth:(double)a4 relatedInfo:(id)a5;
- (void)updateWithReaderWrap:(id)a0 itemIndex:(unsigned int)a1 msgWrap:(id)a2 contact:(id)a3 viewWidth:(double)a4 relatedInfo:(id)a5;
- (void)updateWithRelatedInfo:(id)a0;
- (void)updatePayStatus:(BOOL)a0;
- (void)initPayStateIfNeed;
- (double)viewHeight;
- (BOOL)isTitleSingleLine;
- (BOOL)isTopItemShowLargeCover;
- (id)digest;
- (BOOL)hasTitleTag;
- (struct CGSize { double x0; double x1; })titleTagImageSize;
- (void)updateCellView;
- (void)clearCache;
- (double)itemViewHeightForNormalItem;
- (BOOL)shouldShowFriendRelatedInfoStrInDigestLabel;
- (BOOL)canShowRedPacketcover;
- (void).cxx_destruct;

@end
