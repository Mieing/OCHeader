@class NSString;

@interface MBFileStorageUsrSpaceItem : NSObject

@property (copy, nonatomic) NSString *bizName;
@property (copy, nonatomic) NSString *usrDir;
@property (nonatomic) double sizeInBytes;
@property (nonatomic) unsigned int lastOpenTime;

- (void).cxx_destruct;

@end
