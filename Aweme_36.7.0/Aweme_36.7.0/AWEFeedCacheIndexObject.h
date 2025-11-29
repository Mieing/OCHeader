@class NSString, NSNumber;

@interface AWEFeedCacheIndexObject : NSObject <NSCoding, AWEFeedCacheIndexModel>

@property (copy, nonatomic) NSString *awemeID;
@property (copy, nonatomic) NSString *provider;
@property (nonatomic) BOOL isFinishDownloading;
@property (nonatomic) BOOL isDirty;
@property (copy, nonatomic) NSString *cachedURL;
@property (copy, nonatomic) NSString *urlKey;
@property (nonatomic) double cacheTimeStamp;
@property (retain, nonatomic) NSNumber *score;
@property (nonatomic) long long potentialRiskLevel;
@property (copy, nonatomic) NSString *authorID;
@property (copy, nonatomic) NSString *musicID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAweme:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
