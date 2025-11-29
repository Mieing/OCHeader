@class MMBaseSessionCellData, NSString;

@interface BizMyMessageListReportItem : NSObject

@property (retain, nonatomic) MMBaseSessionCellData *cellData;
@property (nonatomic) unsigned long long timeStamp;
@property (nonatomic) int actionType;
@property (nonatomic) BOOL isStar;
@property (copy, nonatomic) NSString *username;

- (void).cxx_destruct;

@end
