@class NSString, NSArray;

@interface AWEIMDownloadVideoActionSheetModel : NSObject

@property (copy, nonatomic) NSString *groupId;
@property (copy, nonatomic) NSArray *items;

- (void)addItemWithTitle:(id)a0 iconImage:(id)a1 handler:(id /* block */)a2;
- (void).cxx_destruct;
- (id)initWithGroupId:(id)a0;

@end
