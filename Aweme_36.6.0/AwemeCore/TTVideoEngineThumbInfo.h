@class NSString, NSArray;

@interface TTVideoEngineThumbInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long imageNum_ver2;
@property (copy, nonatomic) NSString *uri_ver2;
@property (copy, nonatomic) NSString *imageURL_ver2;
@property (nonatomic) long long imageXSize_ver2;
@property (nonatomic) long long imageYSize_ver2;
@property (nonatomic) long long imageXLen_ver2;
@property (nonatomic) long long imageYLen_ver2;
@property (nonatomic) double duration_ver2;
@property (nonatomic) double interval_ver2;
@property (copy, nonatomic) NSString *fext_ver2;
@property (nonatomic) long long apiVer;
@property (nonatomic) long long imageNum;
@property (copy, nonatomic) NSString *uri;
@property (copy, nonatomic) NSString *imageURL;
@property (nonatomic) long long imageXSize;
@property (nonatomic) long long imageYSize;
@property (nonatomic) long long imageXLen;
@property (nonatomic) long long imageYLen;
@property (nonatomic) double duration;
@property (nonatomic) double interval;
@property (copy, nonatomic) NSString *fext;
@property (copy, nonatomic) NSArray *imageURLs;

- (id)getValueArray:(long long)a0;
- (long long)getValueInt:(long long)a0;
- (id)getValueStr:(long long)a0;
- (double)getValueFloat:(long long)a0;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
