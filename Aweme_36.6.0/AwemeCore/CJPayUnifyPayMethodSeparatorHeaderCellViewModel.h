@class NSString, CJPayUIComponentTextModel;

@interface CJPayUnifyPayMethodSeparatorHeaderCellViewModel : CJPayBaseListViewModel

@property (nonatomic) long long style;
@property (copy, nonatomic) NSString *iconUrlStr;
@property (copy, nonatomic) NSString *titleStr;
@property (copy, nonatomic) NSString *titleImageUrlStr;
@property (copy, nonatomic) CJPayUIComponentTextModel *recommendModel;
@property (copy, nonatomic) NSString *rightTipsStr;
@property (nonatomic) BOOL isOnlyShowSepLine;
@property (copy, nonatomic) NSString *bgImageUrlStr;
@property (nonatomic) BOOL isNeedTopLine;

- (Class)getViewClass;
- (void).cxx_destruct;
- (double)viewHeight;

@end
