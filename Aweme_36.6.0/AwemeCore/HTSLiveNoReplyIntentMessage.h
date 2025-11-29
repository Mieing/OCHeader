@class HTSLiveCommon, NSMutableArray;

@interface HTSLiveNoReplyIntentMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (retain, nonatomic) NSMutableArray *chatListArray;
@property (readonly, nonatomic) unsigned long long chatListArray_Count;

+ (id)descriptor;

@end
