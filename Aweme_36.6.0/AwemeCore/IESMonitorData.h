@class NSMutableDictionary;

@interface IESMonitorData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long appLaunchTimeMs;
@property (nonatomic) long long waitingCount;
@property (nonatomic) long long exitCount;
@property (nonatomic) BOOL fromSaveCache;
@property (retain, nonatomic) NSMutableDictionary *trackData;


- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
