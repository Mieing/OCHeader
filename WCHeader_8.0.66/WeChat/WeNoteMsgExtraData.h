@class NSString, NSMutableArray;

@interface WeNoteMsgExtraData : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *conversationName;
@property (nonatomic) unsigned long long msgId;
@property (retain, nonatomic) NSMutableArray *recordIndexList;
@property (nonatomic) int fromScene;

+ (void)initialize;

@end
