@class NSString;

@interface GetProfileScreenCastReq : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *bizusername;
@property (nonatomic) unsigned int seq;
@property (nonatomic) unsigned int reqCount;
@property (retain, nonatomic) NSString *context;
@property (nonatomic) unsigned int lastCreateTime;

+ (void)initialize;

@end
