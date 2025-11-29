@class NSData, NSString;

@interface FinderLiveKtvSongPlayResourceInfo_ResourceInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSData *content;
@property (nonatomic) int compressType;
@property (nonatomic) long long timestamp;
@property (retain, nonatomic) NSString *version;

+ (void)initialize;

@end
