@class NSString;

@interface WCPayF2FReceiveRecordItem : NSObject

@property (nonatomic) unsigned long long timeStamp;
@property (retain, nonatomic) NSString *billID;
@property (retain, nonatomic) NSString *transID;
@property (retain, nonatomic) NSString *desc;
@property (nonatomic) unsigned long long amount;

- (void).cxx_destruct;

@end
