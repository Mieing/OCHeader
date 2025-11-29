@class NSString, NSArray, WCPayF2FReceiveDetailSummaryItem;

@interface WCPayF2FReceiveDetailResponse : NSObject

@property (nonatomic) long long retCode;
@property (retain, nonatomic) NSString *retMsg;
@property (retain, nonatomic) WCPayF2FReceiveDetailSummaryItem *summaryItem;
@property (retain, nonatomic) NSArray *recordList;

- (void).cxx_destruct;

@end
