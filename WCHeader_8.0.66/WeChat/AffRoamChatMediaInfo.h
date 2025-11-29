@class NSMutableArray;

@interface AffRoamChatMediaInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long msgSvrId;
@property (retain, nonatomic) NSMutableArray *mediaId;
@property (retain, nonatomic) NSMutableArray *mediaType;
@property (retain, nonatomic) NSMutableArray *mediaPath;

+ (void)initialize;

@end
