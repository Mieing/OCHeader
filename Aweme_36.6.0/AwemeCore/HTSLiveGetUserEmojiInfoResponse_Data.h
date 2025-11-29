@class NSMutableArray, HTSLiveUserInfo, HTSLiveEmoji;

@interface HTSLiveGetUserEmojiInfoResponse_Data : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveUserInfo *targetAuthor;
@property (nonatomic) BOOL hasTargetAuthor;
@property (nonatomic) BOOL isMember;
@property (nonatomic) BOOL isAddToEmojiStore;
@property (retain, nonatomic) HTSLiveEmoji *targetEmoji;
@property (nonatomic) BOOL hasTargetEmoji;
@property (retain, nonatomic) NSMutableArray *authorAllEmojiArray;
@property (readonly, nonatomic) unsigned long long authorAllEmojiArray_Count;
@property (nonatomic) BOOL isAnyMember;

+ (id)descriptor;

@end
