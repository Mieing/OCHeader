@class HTSLiveGetUserEmojiInfoResponse_Data;

@interface HTSLiveGetUserEmojiInfoResponse : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveGetUserEmojiInfoResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
