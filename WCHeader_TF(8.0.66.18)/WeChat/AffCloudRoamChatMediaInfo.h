@class NSMutableArray;

@interface AffCloudRoamChatMediaInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long msgSvrId;
@property (retain, nonatomic) NSMutableArray *mediaId;
@property (retain, nonatomic) NSMutableArray *mediaType;
@property (retain, nonatomic) NSMutableArray *mediaPath;
@property (retain, nonatomic) NSMutableArray *mediaCdnUrl;
@property (retain, nonatomic) NSMutableArray *mediaCdnType;
@property (retain, nonatomic) NSMutableArray *mediaCdnSize;
@property (retain, nonatomic) NSMutableArray *mediaAesKey;

+ (void)initialize;

@end
