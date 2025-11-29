@class HTSLiveAvatarCommon, NSString, HTSLiveAvatarChatMessage;

@interface HTSLiveAvatarChatData : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveAvatarCommon *bizCommon;
@property (nonatomic) BOOL hasBizCommon;
@property (nonatomic) int code;
@property (copy, nonatomic) NSString *status;
@property (nonatomic) int dataType;
@property (nonatomic) BOOL newSegment;
@property (retain, nonatomic) HTSLiveAvatarChatMessage *data_p;
@property (nonatomic) BOOL hasData_p;
@property (copy, nonatomic) NSString *reviewId;
@property (copy, nonatomic) NSString *hisOffsetId;
@property (copy, nonatomic) NSString *msgId;

+ (id)descriptor;

@end
