@class NSMutableDictionary, NSMutableArray;

@interface TIMXPBNConversationCoreInfoExt : GPBMessage

@property (nonatomic) long long conversationShortId;
@property (nonatomic) BOOL hasConversationShortId;
@property (retain, nonatomic) NSMutableDictionary *ext;
@property (readonly, nonatomic) unsigned long long ext_Count;
@property (retain, nonatomic) NSMutableArray *extVersionArray;
@property (readonly, nonatomic) unsigned long long extVersionArray_Count;
@property (nonatomic) BOOL extFull;
@property (nonatomic) BOOL hasExtFull;

+ (id)descriptor;

@end
