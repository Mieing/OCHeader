@class NSData, FinderSubtitle, BaseResponse;

@interface FinderGetSubtitleResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) FinderSubtitle *subtitle;
@property (nonatomic) unsigned long long prefetchTimestamp;

+ (void)initialize;

@end
