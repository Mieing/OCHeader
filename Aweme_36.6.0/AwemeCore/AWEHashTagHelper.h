@class NSString;

@interface AWEHashTagHelper : HTSService <AWEHashTagHelper>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)emojiRegex;
+ (id)endWithHashTagRegExp;
+ (id)hashTagRegExp;
+ (id)resolveHashTagsWithText:(id)a0;
+ (void)handleHashTags:(id)a0 withSpecialHashtags:(id)a1 withPlainText:(id)a2;
+ (id)validHashTagCharset;

- (id)emojiRegularExpression;

@end
