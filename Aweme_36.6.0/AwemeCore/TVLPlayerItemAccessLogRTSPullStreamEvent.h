@class NSDate;

@interface TVLPlayerItemAccessLogRTSPullStreamEvent : TVLPlayerItemAccessLogPullStreamEvent

@property (retain, nonatomic) NSDate *initializationFinishedDate;
@property (retain, nonatomic) NSDate *SDPDNSFinishedDate;
@property (retain, nonatomic) NSDate *SDPTCPConnectedDate;
@property (retain, nonatomic) NSDate *SDPTLSHandshakeFinishedDate;
@property (retain, nonatomic) NSDate *SDPOfferSentDate;
@property (retain, nonatomic) NSDate *SDPAnswerReceivedDate;
@property (retain, nonatomic) NSDate *SDPAnswerUpdatedDate;
@property (retain, nonatomic) NSDate *SDPIceConnectedDate;
@property (retain, nonatomic) NSDate *playStartDate;

- (id)logInfo;
- (void).cxx_destruct;

@end
