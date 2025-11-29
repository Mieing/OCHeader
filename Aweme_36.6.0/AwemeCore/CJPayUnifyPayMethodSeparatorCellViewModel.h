@class NSString;

@interface CJPayUnifyPayMethodSeparatorCellViewModel : CJPayBaseListViewModel

@property (nonatomic) long long style;
@property (copy, nonatomic) NSString *descText;
@property (nonatomic) BOOL isInFoldStatus;
@property (nonatomic) BOOL allowAbbreviatedPayChannelText;
@property (copy, nonatomic) NSString *rightBtnText;
@property (nonatomic) BOOL isNeedTopLine;
@property (nonatomic) long long rightBtnStyle;
@property (copy, nonatomic) id /* block */ foldClickBlock;
@property (copy, nonatomic) id /* block */ rightBtnClickBlock;

- (Class)getViewClass;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)viewHeight;

@end
