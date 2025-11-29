@class NSString, MBFileSpaceStatusBizItem;

@interface MBFileStorageStatusSortBizItem : NSObject

@property (retain, nonatomic) NSString *bizName;
@property (retain, nonatomic) MBFileSpaceStatusBizItem *bizItem;

- (id)description;
- (long long)compare:(id)a0;
- (void).cxx_destruct;

@end
