@class NSString;

@interface WCUserFileScanFolderItem : NSObject

@property (copy, nonatomic) NSString *parentPath;
@property (nonatomic) unsigned long long scanFileType;
@property (nonatomic) unsigned long long depth;

- (void).cxx_destruct;

@end
