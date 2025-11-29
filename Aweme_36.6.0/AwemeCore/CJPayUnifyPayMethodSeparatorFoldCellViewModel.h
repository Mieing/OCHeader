@class NSString, NSArray;

@interface CJPayUnifyPayMethodSeparatorFoldCellViewModel : CJPayBaseListViewModel

@property (copy, nonatomic) NSString *foldDesc;
@property (copy, nonatomic) NSArray *iconUrlList;
@property (copy, nonatomic) id /* block */ foldClickBlock;

- (Class)getViewClass;
- (void).cxx_destruct;
- (double)viewHeight;

@end
