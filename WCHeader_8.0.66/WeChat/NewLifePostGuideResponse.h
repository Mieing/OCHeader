@class NSString, BaseResponse;

@interface NewLifePostGuideResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *postGuideTopicWording;
@property (retain, nonatomic) NSString *postGuideTopicTag;
@property (nonatomic) unsigned int showInSeconds;

+ (void)initialize;

@end
