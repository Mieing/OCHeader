@class NSData;

@interface TransResult_Sent : WXPBGeneratedMessage

@property (retain, nonatomic) NSData *text;
@property (nonatomic) long long msBegin;
@property (nonatomic) long long msEnd;

+ (void)initialize;

@end
