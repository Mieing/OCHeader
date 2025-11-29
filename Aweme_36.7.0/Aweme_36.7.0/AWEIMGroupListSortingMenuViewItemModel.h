@class NSString;

@interface AWEIMGroupListSortingMenuViewItemModel : NSObject

@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL isSelected;

- (id)initWithTitle:(id)a0 isSelected:(BOOL)a1;
- (void)configWithIsSelected:(BOOL)a0;
- (void).cxx_destruct;

@end
