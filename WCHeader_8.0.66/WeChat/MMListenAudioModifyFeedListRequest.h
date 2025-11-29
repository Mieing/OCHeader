@class NSMutableArray, BaseRequest, NSString, MMListenAudioBaseRequest, MMListenItem, MMListenAudioModifyFeedListContext;

@interface MMListenAudioModifyFeedListRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) MMListenAudioBaseRequest *audioBaseRequest;
@property (nonatomic) unsigned long long op;
@property (retain, nonatomic) NSString *categoryId;
@property (retain, nonatomic) NSString *listenId;
@property (retain, nonatomic) MMListenItem *listenItem;
@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) NSString *feedidlistUniqueId;
@property (retain, nonatomic) MMListenAudioModifyFeedListContext *moveContext;
@property (retain, nonatomic) NSMutableArray *listenIds;

+ (void)initialize;

@end
