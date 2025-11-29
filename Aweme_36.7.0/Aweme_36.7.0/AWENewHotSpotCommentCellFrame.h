@class AWENewHotSpotCommentContentFrame, NSString, AWENewHotSpotFeedCardModel, AWENewHotSpotAuthorInfoFrame, AWENewHotSpotCommentActionPanelFrame;

@interface AWENewHotSpotCommentCellFrame : NSObject <AWENewHotSpotCellFrameProtocol>

@property (weak, nonatomic) AWENewHotSpotFeedCardModel *cardModel;
@property (retain, nonatomic) AWENewHotSpotAuthorInfoFrame *authorInfoFrame;
@property (retain, nonatomic) AWENewHotSpotCommentContentFrame *contentFrame;
@property (nonatomic) long long contentLabelStyle;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } commentImageFrame;
@property (retain, nonatomic) AWENewHotSpotCommentActionPanelFrame *panelFrame;
@property (nonatomic) BOOL shouldShowSubTagInfo;
@property (copy, nonatomic) NSString *subTagStr;
@property (copy, nonatomic) NSString *displayTimeStr;
@property (nonatomic) BOOL isCommentPanelHeader;
@property (nonatomic) BOOL shouldShowSourceContainer;
@property (copy, nonatomic) NSString *sourceText;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceContainerFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceTextFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceArrowFrame;
@property (nonatomic) double containerWidth;
@property (nonatomic) double cardHeight;
@property (nonatomic) double commentContentCardHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })p_commentImageAdjustSizeWithRawSize:(struct CGSize { double x0; double x1; })a0;
- (id)commentImageURLModel;
- (void)reCalculateExpandFrameWithCardModel:(id)a0 containerWidth:(double)a1;
- (void)configWithCardModel:(id)a0 containerWidth:(double)a1;
- (id)awmeModel;
- (id)hotSpotCardModel;
- (void).cxx_destruct;
- (id)init;
- (id)itemID;
- (long long)cardType;

@end
