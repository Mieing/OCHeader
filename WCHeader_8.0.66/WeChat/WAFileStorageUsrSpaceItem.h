@class NSString;

@interface WAFileStorageUsrSpaceItem : NSObject

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *usrDir;
@property (nonatomic) double sizeInBytes;
@property (nonatomic) unsigned int lastOpenTime;

- (void).cxx_destruct;

@end
