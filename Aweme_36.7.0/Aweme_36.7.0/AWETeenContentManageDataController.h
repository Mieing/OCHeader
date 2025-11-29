@interface AWETeenContentManageDataController : NSObject

@property (nonatomic) BOOL isUpdated;

- (void)updateDataWithStatus:(BOOL)a0;
- (void)fetchContentManageDataSource;
- (BOOL)getUpdatedStatus;

@end
