@class NSMutableArray;

@interface RoamEnc : WXPBGeneratedMessage

@property (nonatomic) unsigned long long encId;
@property (nonatomic) unsigned long long createTimeMs;
@property (retain, nonatomic) NSMutableArray *deviceEncKeyItems;

+ (void)initialize;

@end
