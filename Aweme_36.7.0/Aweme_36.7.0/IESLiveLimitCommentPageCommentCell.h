@class NSArray, NSString, HTSLiveFixedChatSyncData, IESLiveLimitCommentPickerView;

@interface IESLiveLimitCommentPageCommentCell : UICollectionViewCell <IESLiveLimitCommentPickerViewDelegate, IESLiveLimitCommentPickerViewDataSource>

@property (retain, nonatomic) HTSLiveFixedChatSyncData *limitData;
@property (retain, nonatomic) NSArray *titles;
@property (retain, nonatomic) IESLiveLimitCommentPickerView *pickerView;
@property (copy, nonatomic) id /* block */ limitCommentPageCommentCellClickCallBack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pickerView:(id)a0 didSelectItem:(long long)a1;
- (unsigned long long)numberOfItemsInPickerView:(id)a0;
- (id)pickerView:(id)a0 titleForItem:(long long)a1;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
