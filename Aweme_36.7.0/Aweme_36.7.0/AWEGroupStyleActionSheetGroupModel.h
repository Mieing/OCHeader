@class NSString, NSArray;

@interface AWEGroupStyleActionSheetGroupModel : NSObject

@property (copy, nonatomic) NSString *groupId;
@property (copy, nonatomic) NSArray *items;

- (void)addItemWithTitle:(id)a0 iconImage:(id)a1 showRightArrow:(BOOL)a2 handler:(id /* block */)a3;
- (void).cxx_destruct;
- (id)initWithGroupId:(id)a0;

@end
