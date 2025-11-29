@class NSMutableArray;

@interface TTVideoEngineLiveVideo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableArray *liveURLInfos;
@property (nonatomic) long long backupStatus;
@property (nonatomic) long long liveStatus;
@property (nonatomic) long long status;
@property (nonatomic) long long startTime;
@property (nonatomic) long long endTime;

- (id)allURLForVideoID:(id)a0 transformedURL:(BOOL)a1;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
