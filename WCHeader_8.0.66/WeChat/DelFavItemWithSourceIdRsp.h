@class NSString;

@interface DelFavItemWithSourceIdRsp : WXPBGeneratedMessage

@property (nonatomic) int ret;
@property (nonatomic) unsigned int favId;
@property (retain, nonatomic) NSString *sourceId;
@property (nonatomic) unsigned int favType;

+ (void)initialize;

@end
