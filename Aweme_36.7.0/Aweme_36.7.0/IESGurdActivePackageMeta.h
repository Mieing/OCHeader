@class NSString, NSArray;

@interface IESGurdActivePackageMeta : NSObject <NSSecureCoding, IESGurdMetadataProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *md5;
@property (copy, nonatomic) NSString *appVersion;
@property (nonatomic) BOOL odr;
@property (nonatomic) unsigned long long version;
@property (nonatomic) unsigned long long packageID;
@property (nonatomic) int packageType;
@property (nonatomic) long long lastUpdateTimestamp;
@property (nonatomic) long long lastReadTimestamp;
@property (nonatomic) long long lastReadTimestampForExpiredClean;
@property (nonatomic) unsigned long long packageSize;
@property (nonatomic) BOOL isUsed;
@property (nonatomic) BOOL preChannelFirstAccess;
@property (copy, nonatomic) NSString *groupName;
@property (copy, nonatomic) NSArray *groups;
@property BOOL forbidVisit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)metaWithData:(id)a0;

- (id)metadataIdentity;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)binaryData;

@end
