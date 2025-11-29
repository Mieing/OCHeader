@class NSString, AWEIMMessageBaseTableViewCell;

@interface AWEIMBaseMessageMenuItem : NSObject <AWEIMBaseMessageMenuItemProtocol>

@property (weak, nonatomic) AWEIMMessageBaseTableViewCell *cell;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)menuItemType;
+ (void)doMessageMenuAction:(id)a0;
+ (id)menuItemTitle:(id)a0;
+ (id)menuItemImageName:(id)a0;
+ (id)menuItemLightImageURL:(id)a0;
+ (id)menuItemDarkImageURL:(id)a0;
+ (id)trackerName:(id)a0;

- (void).cxx_destruct;

@end
