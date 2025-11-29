@class NSString, NSMutableArray;

@interface EncashResultPageInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long expectedArrivalTime;
@property (retain, nonatomic) NSString *arrivalWording;
@property (retain, nonatomic) NSMutableArray *detailInfos;

+ (void)initialize;

@end
