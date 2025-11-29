@class HTSLiveCommon, NSMutableArray;

@interface HTSLiveInteractionPluginCommentMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (retain, nonatomic) NSMutableArray *commentsArray;
@property (readonly, nonatomic) unsigned long long commentsArray_Count;

+ (id)descriptor;

@end
