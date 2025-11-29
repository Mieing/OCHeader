@class NSString, NSIndexPath;

@interface IESECShopSearchHistoryCellVM : NSObject

@property (retain, nonatomic) NSIndexPath *indexPath;
@property (nonatomic) BOOL isFoldBtn;
@property (nonatomic) BOOL isFold;
@property (nonatomic) BOOL editing;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) id /* block */ deleteAction;
@property (copy, nonatomic) id /* block */ foldAction;
@property (copy, nonatomic) id /* block */ selectAction;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0;

@end
