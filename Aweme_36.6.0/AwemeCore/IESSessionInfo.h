@class NSString;

@interface IESSessionInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *sessionID;
@property (nonatomic) long long playTime;
@property (nonatomic) long long sessionRank;
@property (nonatomic) long long sequenceCount;
@property (nonatomic) double timestamp;
@property (nonatomic) BOOL inThisSession;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
