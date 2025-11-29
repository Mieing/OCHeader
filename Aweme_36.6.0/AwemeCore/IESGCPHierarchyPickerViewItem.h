@class NSString, NSArray;

@interface IESGCPHierarchyPickerViewItem : NSObject

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSArray *subItems;
@property (weak, nonatomic) IESGCPHierarchyPickerViewItem *parentItem;

- (void).cxx_destruct;

@end
