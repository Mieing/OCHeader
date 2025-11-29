@class NSString, AWENewHotSpotFeedCardModel;

@interface AWENewHotSpotAuthorInfoFrame : NSObject

@property (nonatomic) BOOL isCommentPanelHeader;
@property (copy, nonatomic) NSString *displayAuthorName;
@property (copy, nonatomic) NSString *displayTimeString;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } containerFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } avatarFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } avatarTagFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } nameFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } timeFrame;
@property (nonatomic) BOOL shouldShow;
@property (nonatomic) BOOL hasAuthenticationInfo;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } authenticationInfoFrame;
@property (copy, nonatomic) NSString *authenticationInfoString;
@property (nonatomic) BOOL shouldShowEditAliasBtn;
@property (nonatomic) BOOL isLiveCellStyle;
@property (nonatomic) BOOL isHotSearchDiscussStyle;
@property (nonatomic) BOOL shouldShowSourceContainer;
@property (copy, nonatomic) NSString *sourceText;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceContainerFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceLabelFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceArrowFrame;
@property (retain, nonatomic) AWENewHotSpotFeedCardModel *cardModel;

- (void)configFrameWithCardModel:(id)a0 containerWidth:(double)a1 leftMargin:(double)a2 rightMargin:(double)a3 isCommentPanelHeader:(BOOL)a4;
- (BOOL)isCommentCard:(id)a0;
- (double)avatarWH;
- (double)textConstraintMaxWidth;
- (id)getCreateTimeWithCardModel:(id)a0;
- (id)displayTimeStringForTimeStamp:(double)a0;
- (id)displaySourceTextString;
- (void)configTimeLineFrame;
- (void)configFrameWithCardModel:(id)a0 containerWidth:(double)a1;
- (BOOL)updateTimeFrameIfNeeded;
- (void).cxx_destruct;
- (id)init;

@end
