@class NSArray, AWEIMSmartEmojiExtraModel;

@interface AWEIMFeedUnreadSharedModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *shareRecordsArray;
@property (copy, nonatomic) NSArray *smartEmojisArray;
@property (retain, nonatomic) AWEIMSmartEmojiExtraModel *smartEmojiExtra;

+ (id)shareRecordsArrayJSONTransformer;
+ (id)smartEmojiExtraJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
