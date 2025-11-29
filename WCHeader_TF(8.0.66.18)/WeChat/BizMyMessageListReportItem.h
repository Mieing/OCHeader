@class MMBaseSessionCellData;

@interface BizMyMessageListReportItem : NSObject

@property (retain, nonatomic) MMBaseSessionCellData *cellData;
@property (nonatomic) unsigned long long timeStamp;
@property (nonatomic) int actionType;
@property (nonatomic) BOOL isStar;

- (void).cxx_destruct;

@end
