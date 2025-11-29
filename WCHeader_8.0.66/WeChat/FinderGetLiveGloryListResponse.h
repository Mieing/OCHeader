@class NSMutableArray, BaseResponse;

@interface FinderGetLiveGloryListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *liveContacts;
@property (nonatomic) unsigned int liveContactsMaxDisplayCount;

+ (void)initialize;

@end
