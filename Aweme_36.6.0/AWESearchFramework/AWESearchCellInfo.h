@class NSString, NSIndexPath, UIView;

@interface AWESearchCellInfo : NSObject

@property (weak, nonatomic) UIView *cell;
@property (weak, nonatomic) id model;
@property (copy, nonatomic) NSString *itemID;
@property (weak, nonatomic) NSIndexPath *indexPath;

- (void).cxx_destruct;

@end
