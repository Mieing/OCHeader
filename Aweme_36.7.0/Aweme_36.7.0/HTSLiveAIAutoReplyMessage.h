@class NSString, HTSLiveCommon, NSMutableDictionary, HTSLivePublicAreaCommon;

@interface HTSLiveAIAutoReplyMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) long long replyMsgId;
@property (copy, nonatomic) NSString *replyContent;
@property (retain, nonatomic) HTSLivePublicAreaCommon *publicAreaCommon;
@property (nonatomic) BOOL hasPublicAreaCommon;
@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) NSMutableDictionary *tag;
@property (readonly, nonatomic) unsigned long long tag_Count;

+ (id)descriptor;

@end
