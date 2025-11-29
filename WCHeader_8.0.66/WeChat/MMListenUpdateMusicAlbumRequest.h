@class NSMutableArray, NSString, MMListenUpdateMusicAlbumRequest_Task, BaseResponse;

@interface MMListenUpdateMusicAlbumRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResquest;
@property (retain, nonatomic) NSString *categoryId;
@property (retain, nonatomic) MMListenUpdateMusicAlbumRequest_Task *task;
@property (retain, nonatomic) NSMutableArray *reorderTasks;

+ (void)initialize;

@end
