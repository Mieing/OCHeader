@class NSString, MusicPostTipsDetail, NSData, BaseResponse;

@interface FinderGetPostTipsResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *words;
@property (retain, nonatomic) NSString *coverUrl;
@property (retain, nonatomic) NSData *postTipsStreamByPass;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *operationName;
@property (nonatomic) BOOL isPreloading;
@property (retain, nonatomic) MusicPostTipsDetail *musicPostTipsDetail;

+ (void)initialize;

@end
