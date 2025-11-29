@class NSString;

@interface GCAtCellModel : GCBaseCellModel

@property (retain, nonatomic) NSString *headUrl;
@property (retain, nonatomic) NSString *nickName;
@property (retain, nonatomic) NSString *subTitle;
@property (retain, nonatomic) NSString *userId;
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL showSeperatedLineInLeft;

- (Class)bindCellClass;
- (double)cellHeight;
- (void).cxx_destruct;

@end
