@class HTSLiveImage;

@interface HTSLiveEmojiDetail : IESLivePBBaseMessage

@property (nonatomic) long long id_p;
@property (retain, nonatomic) HTSLiveImage *content;
@property (nonatomic) BOOL hasContent;

+ (id)descriptor;

@end
