@class NSString, WCPayF2FReceiveDetailSummaryItem;

@interface WCPayF2FDeleteRecordResponse : NSObject

@property (nonatomic) long long retCode;
@property (retain, nonatomic) NSString *retMsg;
@property (retain, nonatomic) WCPayF2FReceiveDetailSummaryItem *summaryItem;

- (void).cxx_destruct;

@end
