@class AWEIMSmartAssistantRecommendQuickReply, NSString, NSDictionary, AWEIMSmartAssistantSuggestMsg;
@protocol AWEIMB2CBottomFloatingAndPanelCellViewModelDelegate;

@interface AWEIMB2CBottomFloatingAndPanelCellViewModel : NSObject <NSCoding>

@property (nonatomic) unsigned long long scene;
@property (nonatomic) unsigned long long source;
@property (nonatomic) unsigned long long style;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) AWEIMSmartAssistantSuggestMsg *suggestMsg;
@property (retain, nonatomic) AWEIMSmartAssistantRecommendQuickReply *quickReply;
@property (copy, nonatomic) NSString *keyword;
@property (weak, nonatomic) id<AWEIMB2CBottomFloatingAndPanelCellViewModelDelegate> delegate;
@property (copy, nonatomic) NSDictionary *trackExt;
@property (copy, nonatomic) NSString *layerIconLight;
@property (copy, nonatomic) NSString *layerIconDark;
@property (copy, nonatomic) NSString *panelIconLight;
@property (copy, nonatomic) NSString *panelIconDark;

+ (struct CGSize { double x0; double x1; })sizeForHeader;
+ (double)panelTitleLabelTopBottomPadding;
+ (double)panelTitleLabelTitileToIconPadding;
+ (double)panelTitleLabelLeftRightPadding;
+ (double)minimumLineSpacingForBottomView;
+ (double)lineTopHeight;
+ (double)minimumLineSpacingForPanelView;
+ (double)paddingForHeader;
+ (double)panelBottom;
+ (double)heightForBottomInteractor;
+ (id)deleteSmartContentIfNeeded:(id)a0;

- (void)didSelectCell;
- (double)heightOfCellForOpt;
- (double)titleLabelPanelMaxWidth;
- (id)titleLabelPanelTextFont;
- (double)titleLabelMaxWidth;
- (id)titleLabelBottomTextFont;
- (double)panelTitleLabelMaxWidth;
- (double)heightOfCell;
- (double)heightOfCellForOld;
- (double)titleLabelFloatInputMaxWidth;
- (void)didShowCell;
- (id)makeSendMessageSyncedExt:(unsigned long long)a0 peerUserID:(id)a1;
- (BOOL)sendSuggestMsgToCidIfNeeded:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
