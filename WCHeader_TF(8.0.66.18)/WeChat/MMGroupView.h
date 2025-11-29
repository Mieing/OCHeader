@class NSMutableArray;

@interface MMGroupView : UIView

@property (nonatomic) unsigned int groupViewDirection;
@property (retain, nonatomic) NSMutableArray *arrGroupViews;

- (id)init;
- (void)layoutSubviews;
- (BOOL)isAllHidden;
- (void).cxx_destruct;

@end
