@class NSString, NSMutableArray;

@interface FinderNewLifeDesc : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *richTextJson;
@property (retain, nonatomic) NSString *richTextTitle;
@property (nonatomic) double pictureCutRatio;
@property (nonatomic) unsigned int fromRichPublisher;
@property (retain, nonatomic) NSMutableArray *secretlyPushChatroomName;
@property (retain, nonatomic) NSMutableArray *commentEggInfo;
@property (nonatomic) double pictureCutRatioForFinder;
@property (retain, nonatomic) NSMutableArray *videoTmplInfo;
@property (retain, nonatomic) NSMutableArray *customCropInfo;
@property (nonatomic) unsigned int postEnterScene;
@property (nonatomic) unsigned int sourcePostEnterScene;
@property (nonatomic) unsigned int fromPublisherType;

+ (id)modelPropertyBlacklistForConfigTag:(id)a0;
+ (void)initialize;

- (void)setFromPublisherType:(unsigned int)a0;
- (unsigned int)fromPublisherType;
- (void)setSourcePostEnterScene:(unsigned int)a0;
- (unsigned int)sourcePostEnterScene;
- (void)setPostEnterScene:(unsigned int)a0;
- (unsigned int)postEnterScene;
- (void)setCustomCropInfo:(id)a0;
- (id)customCropInfo;
- (void)setVideoTmplInfo:(id)a0;
- (id)videoTmplInfo;
- (void)setPictureCutRatioForFinder:(double)a0;
- (double)pictureCutRatioForFinder;
- (void)setCommentEggInfo:(id)a0;
- (id)commentEggInfo;
- (void)setSecretlyPushChatroomName:(id)a0;
- (id)secretlyPushChatroomName;
- (void)setFromRichPublisher:(unsigned int)a0;
- (unsigned int)fromRichPublisher;
- (void)setPictureCutRatio:(double)a0;
- (double)pictureCutRatio;
- (void)setRichTextTitle:(id)a0;
- (id)richTextTitle;
- (void)setRichTextJson:(id)a0;
- (id)richTextJson;

@end
