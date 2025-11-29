@class NSString, UIFont, WCFinderContactPreviewData;
@protocol WCFinderContactFinderAssistDelegate;

@interface WCFinderContactFinderAssist : NSObject

@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) BOOL hasFetchPreviewData;
@property (nonatomic) BOOL entranceCellExposed;
@property (retain, nonatomic) NSString *alreadyFetchKey;
@property (retain, nonatomic) WCFinderContactPreviewData *previewData;
@property (nonatomic) BOOL useNewStyle;
@property (nonatomic) long long mask;
@property (nonatomic) long long type;
@property (weak, nonatomic) id<WCFinderContactFinderAssistDelegate> delegate;
@property (nonatomic) double customViewRightSmall;
@property (nonatomic) double imageViewMargin;
@property (nonatomic) double customViewLeftMargin;
@property (retain, nonatomic) UIFont *sectionFont;
@property (retain, nonatomic) UIFont *nicknameFont;

- (id)init;
- (void)setupWXUsername:(id)a0 finderUserName:(id)a1;
- (id)makeFinderSection;
- (void)addFinderToSection:(id)a0;
- (id)finderAuthInfo;
- (id)finderAuthString;
- (id)fetchAndSyncFinderContactPreviewData;
- (void)fetchPreviewDataFinish;
- (id)fetchLocalPreviewData;
- (id)fetchCheckKey;
- (void)addFinderEntranceCellAtSection:(id)a0;
- (BOOL)hasFinderEntranceCell;
- (id)finderEntranceCellInfo;
- (id)getFinderCellViewNewStyle:(BOOL)a0;
- (void)showFinderProfile;
- (id)contact;
- (void)onTapAuthViews;
- (void).cxx_destruct;

@end
