@interface IESLiveAnchorAudienceInteractiveGameMessageSequenceNumberGenerator : NSObject

@property (nonatomic) long long latestSeqNumber;

- (void)resetSeq:(long long)a0;
- (id)init;
- (long long)generateSequenceNumber;

@end
