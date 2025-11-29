@class NSString, NSNumber;

@interface TTVideoEngineMaskInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *maskUrl;
@property (copy, nonatomic) NSString *fileId;
@property (copy, nonatomic) NSString *filehash;
@property (nonatomic) long long bitrate;
@property (nonatomic) long long headLen;
@property (retain, nonatomic) NSNumber *fileSize;
@property (retain, nonatomic) NSNumber *updatedAt;

- (long long)getValueInt:(long long)a0;
- (id)getValueStr:(long long)a0;
- (id)toMediaInfoDict;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
