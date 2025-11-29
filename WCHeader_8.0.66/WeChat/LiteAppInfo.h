@class NSString;

@interface LiteAppInfo : NSObject <NSCoding>

@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *groupId;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *md5;
@property (retain, nonatomic) NSString *signatureKey;
@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) NSString *patchId;
@property (nonatomic) unsigned long long updateTime;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
