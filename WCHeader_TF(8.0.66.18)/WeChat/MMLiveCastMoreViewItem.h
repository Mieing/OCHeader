@class NSString;

@interface MMLiveCastMoreViewItem : MMLiveCastViewItem

@property (copy, nonatomic) NSString *richTextTitle;
@property (nonatomic) BOOL isSelectable;
@property (nonatomic) unsigned long long itemStatus;

- (void)updateStatusAsLoading;
- (void)updateStatusAsUndergroundLoading;
- (void)updateStatusAsDevicesFound;
- (void)updateStatusAsDevicesNotFound;
- (void)didSelect;
- (void).cxx_destruct;

@end
