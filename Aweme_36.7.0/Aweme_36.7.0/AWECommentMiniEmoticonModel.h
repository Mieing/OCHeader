@class NSDictionary, NSString;

@interface AWECommentMiniEmoticonModel : NSObject <NSCoding>

@property (copy, nonatomic) NSDictionary *emojiRecommendRawDict;
@property (copy, nonatomic) NSString *emoticonIcon;
@property (copy, nonatomic) NSString *emoticonTitle;

- (id)initWithEmoticonIcon:(id)a0 emoticonTitle:(id)a1;
- (BOOL)isEqualToEmoticon:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
