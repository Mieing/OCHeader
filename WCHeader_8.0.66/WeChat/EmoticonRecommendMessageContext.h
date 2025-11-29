@class NSString;

@interface EmoticonRecommendMessageContext : MMObject

@property (nonatomic) unsigned int messageType;
@property (nonatomic) unsigned int appMessageInnerType;
@property (nonatomic) unsigned int payInfoSceneId;
@property (retain, nonatomic) NSString *extInfo;
@property (nonatomic) unsigned int createTime;
@property (nonatomic) BOOL isSelf;
@property (retain, nonatomic) NSString *lensId;
@property (nonatomic) BOOL isRelatedEmoticon;

+ (id)messageContextsFromMessageWraps:(id)a0;

- (id)initWithMessageWrap:(id)a0;
- (id)panelEmojiCtx;
- (void).cxx_destruct;

@end
