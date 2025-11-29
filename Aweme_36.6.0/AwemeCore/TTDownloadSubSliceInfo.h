@class NSString;

@interface TTDownloadSubSliceInfo : NSObject

@property (copy) NSString *fileStorageDir;
@property char sliceNumber;
@property unsigned long long subSliceNumber;
@property (copy) NSString *subSliceName;
@property (copy) NSString *subSliceFullPath;
@property long long rangeStart;
@property long long rangeEnd;
@property long long sliceStatus;
@property BOOL isImmutable;

- (void).cxx_destruct;

@end
