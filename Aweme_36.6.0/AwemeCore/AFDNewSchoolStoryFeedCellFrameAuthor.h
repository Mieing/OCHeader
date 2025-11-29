@class NSString, NSAttributedString, AWEConcernCardModel;

@interface AFDNewSchoolStoryFeedCellFrameAuthor : NSObject

@property (copy, nonatomic) NSAttributedString *displayAuthorName;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } containerFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } avatarFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } avatarTagFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } nameFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } relationLabelFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } recommendLabelFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } followBtnFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } feedbackBtnFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } insStyleTimeFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } subTagFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } recommendViewFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } authorBackgroundViewFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cardUpRightTagFrame;
@property (nonatomic) double authorViewAppendHeight;
@property (nonatomic) BOOL showTimeInfo;
@property (nonatomic) BOOL shouldShowFeedbackBtn;
@property (copy, nonatomic) NSString *timeString;
@property (copy, nonatomic) NSString *subTagString;
@property (copy, nonatomic) NSString *displayRelationStr;
@property (nonatomic) BOOL shouldShowEditAliasBtn;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) unsigned long long layoutType;
@property (nonatomic) unsigned long long browsedType;
@property (retain, nonatomic) AWEConcernCardModel *cardModel;
@property (nonatomic) BOOL shouldShowBillBoardRank;
@property (nonatomic) BOOL isSearchAdjust;
@property (nonatomic) BOOL isSelfAweme;
@property (nonatomic) BOOL isToRed;
@property (nonatomic) BOOL upRightTagIsShow;
@property (readonly, nonatomic) BOOL isRecommendUser;
@property (copy, nonatomic) NSString *upRightTagDesc;

- (void)configFrameWithCardModel:(id)a0 showTimeInfo:(BOOL)a1 layoutType:(unsigned long long)a2 browsedType:(unsigned long long)a3 timeStr:(id)a4;
- (void)handleSearchHighlight:(id)a0;
- (id)authorPrefix;
- (void).cxx_destruct;
- (id)init;

@end
