@class FinderEventInfo;

@interface NewLifePostEventClickReq : WXPBGeneratedMessage

@property (retain, nonatomic) FinderEventInfo *currentSelectEvent;
@property (nonatomic) BOOL allowCreateEvent;

+ (void)initialize;

@end
