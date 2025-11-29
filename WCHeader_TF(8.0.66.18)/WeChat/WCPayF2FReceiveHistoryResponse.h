@class NSString, NSArray;

@interface WCPayF2FReceiveHistoryResponse : NSObject

@property (nonatomic) long long retCode;
@property (retain, nonatomic) NSString *retMsg;
@property (retain, nonatomic) NSArray *historyList;
@property (nonatomic) unsigned long long chooseFlag;
@property (nonatomic) unsigned long long loadMoreDirection;
@property (nonatomic) BOOL bIsAllDataLoadEnd;
@property (nonatomic) unsigned long long svrFromTimestamp;
@property (nonatomic) unsigned int svrRetTrynum;

- (void).cxx_destruct;

@end
