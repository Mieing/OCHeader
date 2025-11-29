@class NSString;

@interface IESSeqPlayInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *sessionID;
@property (retain, nonatomic) NSString *sequenceID;
@property (nonatomic) double timestamp;
@property (nonatomic) long long sequenceRank;
@property (nonatomic) long long sessionRank;
@property (nonatomic) long long playTime;
@property (nonatomic) long long headCnt;
@property (nonatomic) long long commentCnt;
@property (nonatomic) long long likeCnt;
@property (nonatomic) long long dislikeCnt;
@property (nonatomic) long long playFinishCnt;
@property (nonatomic) long long skipCnt;
@property (nonatomic) BOOL inThisSession;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
