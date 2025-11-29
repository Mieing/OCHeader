@class NSMutableDictionary, NSMutableArray;

@interface TIMXPBNConversationSettingInfoExt : GPBMessage

@property (nonatomic) long long conversationShortId;
@property (nonatomic) BOOL hasConversationShortId;
@property (nonatomic) long long userId;
@property (nonatomic) BOOL hasUserId;
@property (retain, nonatomic) NSMutableDictionary *ext;
@property (readonly, nonatomic) unsigned long long ext_Count;
@property (retain, nonatomic) NSMutableArray *extVersionArray;
@property (readonly, nonatomic) unsigned long long extVersionArray_Count;
@property (nonatomic) BOOL extFull;
@property (nonatomic) BOOL hasExtFull;

+ (id)descriptor;

@end
