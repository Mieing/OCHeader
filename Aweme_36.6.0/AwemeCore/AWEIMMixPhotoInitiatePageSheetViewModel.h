@class AWEIMMessageConversation, NSString, NSArray, NSDictionary, AWEIMMixPhotoAIModelInfoViewModel;

@interface AWEIMMixPhotoInitiatePageSheetViewModel : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *describe;
@property (copy, nonatomic) NSString *negativeText;
@property (copy, nonatomic) NSString *positiveText;
@property (copy, nonatomic) NSArray *sections;
@property (retain, nonatomic) AWEIMMixPhotoAIModelInfoViewModel *aiModel;
@property (nonatomic) BOOL hasSelected;
@property (readonly, nonatomic) AWEIMMessageConversation *conversation;
@property (readonly, copy, nonatomic) NSDictionary *trackExtra;
@property (nonatomic) BOOL positiveButtonDisable;

- (void)didSelected;
- (void)refreshAIModel;
- (void)vcDidDealloc;
- (void)vcDidLoad;
- (void)updateWithStyleModel:(id)a0 styleItemModelMap:(id)a1;
- (id)initWithConversation:(id)a0 styleModel:(id)a1 styleItemModelMap:(id)a2 trackExtra:(id)a3;
- (void).cxx_destruct;
- (id)selectedItem;

@end
