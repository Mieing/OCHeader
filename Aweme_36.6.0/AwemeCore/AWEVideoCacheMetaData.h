@class NSString;

@interface AWEVideoCacheMetaData : NSObject <NSCoding>

@property (nonatomic) unsigned long long fileLength;
@property (copy, nonatomic) NSString *mimeType;
@property (nonatomic) BOOL disableAutoTrim;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
