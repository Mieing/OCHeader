@class OMJAspectRatio, NSString, OMJFrameRate, NSDate;

@interface OMCProject : NSObject

@property (readonly, nonatomic) struct SharedPtr<XMSProject> { struct XMSProject *_ptr; } backingProject;
@property (readonly, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSDate *modificationDate;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } duration;
@property (readonly, nonatomic) OMJAspectRatio *aspectRatio;
@property (readonly, nonatomic) OMJFrameRate *frameRate;
@property (readonly, nonatomic) long long segmentCount;
@property (readonly, nonatomic) NSString *coverImageFilePath;
@property (readonly, nonatomic) NSString *decorPackageDescFilePath;
@property (readonly, nonatomic) NSString *filesDirPath;
@property (readonly, nonatomic) NSString *assetsDirPath;
@property (readonly, nonatomic) NSString *materialsDirPath;

- (id)initWithBackingProject:(const void *)a0;
- (void)updateCoverImage:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)saveToData;
- (id)description;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
