@class NSData;

@interface FinderLiveStreamJumpNavInfo : WXPBGeneratedMessage

@property (nonatomic) BOOL isValid;
@property (nonatomic) BOOL enablePrefetch;
@property (retain, nonatomic) NSData *jumpNavliveBuffer;

+ (void)initialize;

@end
