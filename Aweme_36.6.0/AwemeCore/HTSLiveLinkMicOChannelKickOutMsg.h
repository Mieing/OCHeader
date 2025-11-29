@class NSString, HTSLiveCommon;

@interface HTSLiveLinkMicOChannelKickOutMsg : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (copy, nonatomic) NSString *kickOutUid;
@property (copy, nonatomic) NSString *toastMsg;

+ (id)descriptor;

@end
