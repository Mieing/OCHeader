@interface IESIMCommentMessageUtils : NSObject

+ (id)getCommentShareModel:(id)a0;
+ (BOOL)commentShareModelAvailableWithID:(id)a0 isAweme:(BOOL)a1;
+ (BOOL)isShareFeedContentCardMessage:(long long)a0;
+ (void)setCommentShareModel:(id)a0 uniqueId:(id)a1;
+ (void)updateAwemeTitle:(id)a0 forID:(id)a1;
+ (id)awemeTitleForID:(id)a0;
+ (id)makeComment:(id)a0 withType:(long long)a1;
+ (struct CGSize { double x0; double x1; })commentMediaSizeWithType:(long long)a0;
+ (id)feedCardTitleAttributes:(id)a0;
+ (id)feedCardSubtitleAttributes:(id)a0;
+ (id)topTitleAttributes:(id)a0;
+ (id)makeAttributedStringWithTruncateHead:(id)a0 tail:(id)a1 maxWidth:(double)a2 attributes:(id)a3;
+ (id)colorWithCardPosition:(unsigned long long)a0 hasBackgroundImg:(BOOL)a1;
+ (id)invisibleColorWithHasBgImg:(BOOL)a0;
+ (BOOL)updateCommentShareModelWithAwemeId:(id)a0 unavailable:(BOOL)a1;

@end
