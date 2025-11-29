@class NSString, NSMutableArray;

@interface HbStatus : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *hbId;
@property (nonatomic) unsigned long long totalAmt;
@property (nonatomic) unsigned int totalNum;
@property (nonatomic) unsigned long long recvAmt;
@property (nonatomic) unsigned int recvNum;
@property (retain, nonatomic) NSMutableArray *recvRecords;
@property (retain, nonatomic) NSMutableArray *exclusiveUsername;

+ (void)initialize;

@end
