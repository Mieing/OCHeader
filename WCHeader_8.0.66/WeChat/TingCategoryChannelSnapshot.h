@class NSString;

@interface TingCategoryChannelSnapshot : WXPBGeneratedMessage

@property (nonatomic) unsigned long long endTimeStampMs;
@property (retain, nonatomic) NSString *curListenId;
@property (nonatomic) unsigned long long pos;
@property (retain, nonatomic) NSString *nextListenId;

+ (void)initialize;

@end
