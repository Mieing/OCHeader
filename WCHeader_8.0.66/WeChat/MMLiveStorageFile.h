@class NSString;

@interface MMLiveStorageFile : NSObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *fullPath;
@property (nonatomic) unsigned long long size;
@property (nonatomic) unsigned long long sizeOnDisk;
@property (nonatomic) long long fileContentId;
@property (nonatomic) BOOL markedForPreservation;
@property (readonly, nonatomic) BOOL fileContentIdAvailable;

- (void).cxx_destruct;

@end
