@class NSString;

@interface CJPayDyPayGroupTitleCellViewModel : CJPayBaseListViewModel

@property (copy, nonatomic) NSString *groupTitle;
@property (copy, nonatomic) NSString *rightButtonTitle;
@property (copy, nonatomic) NSString *rightButtonIconName;
@property (nonatomic) BOOL needBottomLine;
@property (copy, nonatomic) id /* block */ rightButtonClickBlock;

- (double)getViewHeight;
- (Class)getViewClass;
- (void).cxx_destruct;

@end
