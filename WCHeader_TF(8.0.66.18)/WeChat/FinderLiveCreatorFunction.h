@class NSString, FinderJumpInfo, FinderLiveCreatorService;

@interface FinderLiveCreatorFunction : WXPBGeneratedMessage

@property (retain, nonatomic) FinderJumpInfo *jumpInfo;
@property (retain, nonatomic) NSString *leftContent;
@property (nonatomic) unsigned int entranceId;
@property (retain, nonatomic) FinderLiveCreatorService *subService;

+ (void)initialize;

@end
