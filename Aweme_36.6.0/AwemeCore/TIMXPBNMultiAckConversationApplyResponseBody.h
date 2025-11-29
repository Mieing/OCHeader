@class NSString, NSMutableArray;

@interface TIMXPBNMultiAckConversationApplyResponseBody : GPBMessage

@property (retain, nonatomic) NSMutableArray *applyRespListArray;
@property (readonly, nonatomic) unsigned long long applyRespListArray_Count;
@property (nonatomic) int status;
@property (nonatomic) BOOL hasStatus;
@property (copy, nonatomic) NSString *statusMsg;
@property (nonatomic) BOOL hasStatusMsg;

+ (id)descriptor;

@end
