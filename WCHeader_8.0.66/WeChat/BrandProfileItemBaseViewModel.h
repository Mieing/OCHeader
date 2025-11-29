@class NSString, BizMessage, BizAppMsgDetailInfo, NSMutableArray;

@interface BrandProfileItemBaseViewModel : BrandProfileMsgBaseViewModel <BrandPaySubcribeMgrExt>

@property (copy, nonatomic) NSString *pageIdentifier;
@property (nonatomic) BOOL isPaySubcribeOpen;
@property (nonatomic) double height;
@property (retain, nonatomic) BizMessage *groupMsg;
@property (retain, nonatomic) BizAppMsgDetailInfo *itemMsg;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) struct CGSize { double width; double height; } titleSize;
@property (retain, nonatomic) NSMutableArray *titleLabelStyles;
@property (copy, nonatomic) NSString *desc;
@property (nonatomic) BOOL hasDesc;
@property (nonatomic) BOOL hasLandingPage;
@property (nonatomic) BOOL isPayContent;
@property (nonatomic) BOOL isPaid;
@property (readonly, nonatomic) unsigned long long itemCount;
@property (readonly, nonatomic) unsigned long long itemIndex;
@property (readonly, nonatomic) unsigned long long itemPosition;

+ (id)createViewModelWithItemMsg:(id)a0 groupMsg:(id)a1;
+ (id)createViewModelWithGroupMsg:(id)a0;

- (id)initWithItemMsg:(id)a0;
- (id)initWithGroupMsg:(id)a0;
- (id)tableViewCellClassName;
- (void)clearLayoutCache;
- (id)coverImgURL;
- (double)calCellHeight;
- (double)titleMaxWidth;
- (id)titleFont;
- (unsigned long long)titleLineNumber;
- (double)firstItemTopPadding;
- (void)onUpdateMPPagePaySubcribeHasPaidWithPageIdentifier:(id)a0 fullUrl:(id)a1;
- (void)updatePayStatus:(BOOL)a0;
- (void).cxx_destruct;

@end
