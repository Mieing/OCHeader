@class NSString;

@interface IESECFeedCommentConfigImpl : NSObject <IESECFeedCommentConfig>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isColorWhite;
+ (id)commentTextColor;
+ (id)likeLabelNormalTextColor;
+ (id)replyTextColor;
+ (id)retryButtonColor;
+ (id)likeCountsString:(id)a0;
+ (id)timeString:(id)a0;
+ (id)backgroundColor;
+ (id)timeTextColor;
+ (void)setColorMode:(unsigned long long)a0;
+ (id)nameTextColor;


@end
