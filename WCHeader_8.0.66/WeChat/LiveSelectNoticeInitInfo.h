@class NSString, FinderGetLiveNoticeResponse;

@interface LiveSelectNoticeInitInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *anchorFinderUsername;
@property (retain, nonatomic) NSString *objectId;
@property (retain, nonatomic) NSString *selectedNoticeId;
@property (retain, nonatomic) FinderGetLiveNoticeResponse *prefetchedData;
@property (nonatomic) BOOL isAssistant;

+ (void)initialize;

@end
