@class NSString, NSMutableArray;

@interface IMShareStructV2 : GPBMessage

@property (retain, nonatomic) NSMutableArray *shareRecordsArray;
@property (readonly, nonatomic) unsigned long long shareRecordsArray_Count;
@property (nonatomic) BOOL showQuickReply;
@property (nonatomic) BOOL hasShowQuickReply;
@property (retain, nonatomic) NSMutableArray *smartEmojisArray;
@property (readonly, nonatomic) unsigned long long smartEmojisArray_Count;
@property (copy, nonatomic) NSString *smartEmojiExtra;
@property (nonatomic) BOOL hasSmartEmojiExtra;

+ (id)descriptor;

@end
