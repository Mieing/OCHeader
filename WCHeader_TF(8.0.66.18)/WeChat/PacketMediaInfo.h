@class NSString;

@interface PacketMediaInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long svrId;
@property (nonatomic) long long createTime;
@property (retain, nonatomic) NSString *mediaId;
@property (nonatomic) unsigned int mediaType;

+ (void)initialize;

@end
