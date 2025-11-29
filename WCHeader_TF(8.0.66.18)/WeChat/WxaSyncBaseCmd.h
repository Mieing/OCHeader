@class NSString;

@interface WxaSyncBaseCmd : WXPBGeneratedMessage

@property (nonatomic) unsigned int dealEndTime;
@property (nonatomic) unsigned int cmdSequnce;
@property (nonatomic) unsigned int reportIdKey;
@property (nonatomic) unsigned int reportKeyOffset;
@property (retain, nonatomic) NSString *cmdKey;

+ (void)initialize;

@end
