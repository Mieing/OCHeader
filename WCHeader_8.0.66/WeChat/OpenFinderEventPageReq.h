@class FinderObjectEventDesc;

@interface OpenFinderEventPageReq : WXPBGeneratedMessage

@property (retain, nonatomic) FinderObjectEventDesc *eventDesc;
@property (nonatomic) unsigned int activityEnterSource;

+ (void)initialize;

@end
