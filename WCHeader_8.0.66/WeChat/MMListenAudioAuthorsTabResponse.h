@class MMListenAudioBaseResponse, NSData, NSMutableArray, BaseResponse;

@interface MMListenAudioAuthorsTabResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSData *sessionBuffer;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSMutableArray *authors;
@property (retain, nonatomic) MMListenAudioBaseResponse *audioBaseResponse;

+ (void)initialize;

@end
