@interface QQEmojiDataHelper : MMObject

+ (id)getQQEmoticonImage:(id)a0;
+ (BOOL)loadQQEmotionImageByExpression:(id)a0 isSync:(BOOL)a1 completion:(id /* block */)a2;
+ (id)getFinalString:(id)a0;
+ (id)getFinalCode:(id)a0;
+ (id)getQQEmojiArray;
+ (id)getQQemojiPageWrap;
+ (id)getQQPid;
+ (id)getSystemEmojiArray:(id)a0;
+ (id)getSystemEmojiAllCategoriesName;
+ (id)categoryImage:(id)a0;
+ (id)categoryDisplayName:(id)a0;

@end
