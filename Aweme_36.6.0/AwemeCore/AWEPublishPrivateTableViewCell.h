@class NSString;

@interface AWEPublishPrivateTableViewCell : AWENewPublishTableCell <AWEPublishPrivateTableCellProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addSubviewsForContentView;
- (void)configWithPublishViewModel:(id)a0;
- (void)addBadge;

@end
