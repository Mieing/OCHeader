@class NSString;

@interface CJPayAssetQualitySeparatorCellViewModel : CJPayBaseListViewModel

@property (nonatomic) long long style;
@property (copy, nonatomic) NSString *descText;
@property (nonatomic) BOOL isInFoldStatus;
@property (copy, nonatomic) NSString *rightBtnText;
@property (nonatomic) long long rightBtnStyle;
@property (copy, nonatomic) id /* block */ foldClickBlock;
@property (copy, nonatomic) id /* block */ rightBtnClickBlock;

- (Class)getViewClass;
- (void).cxx_destruct;
- (double)viewHeight;

@end
