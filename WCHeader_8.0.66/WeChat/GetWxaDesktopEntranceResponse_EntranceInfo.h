@class NSString;

@interface GetWxaDesktopEntranceResponse_EntranceInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int entranceId;
@property (nonatomic) unsigned int showEntrance;
@property (nonatomic) unsigned int showType;
@property (retain, nonatomic) NSString *wording;
@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSString *iconUrl2;

+ (void)initialize;

@end
