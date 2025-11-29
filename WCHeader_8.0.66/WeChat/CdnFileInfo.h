@class NSString;

@interface CdnFileInfo : NSObject

@property (nonatomic) int fileType;
@property (nonatomic) int format;
@property (nonatomic) int compress;
@property (nonatomic) unsigned long long size;
@property (retain, nonatomic) NSString *md5;
@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSString *buffer;

- (id)desc;
- (void).cxx_destruct;

@end
