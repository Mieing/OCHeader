@class NSString, NSArray;

@interface AVMDLTaskSpec : NSObject

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *rawKey;
@property (copy, nonatomic) NSArray *urls;
@property (copy, nonatomic) NSString *filePath;
@property (copy, nonatomic) NSString *customHeader;
@property (nonatomic) long long taskType;
@property (copy, nonatomic) NSString *extrInfo;
@property (nonatomic) long long urlExpiredTime;
@property (nonatomic) long long fileType;
@property (nonatomic) long long useOriginalUrl;

- (id)initWithKey:(id)a0 rawKey:(id)a1 urls:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
