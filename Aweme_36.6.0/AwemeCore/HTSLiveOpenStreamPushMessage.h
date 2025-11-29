@class NSString, HTSLiveCommon, HTSLiveStreamUrl;

@interface HTSLiveOpenStreamPushMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (copy, nonatomic) NSString *roomId;
@property (retain, nonatomic) HTSLiveStreamUrl *streamURL;
@property (nonatomic) BOOL hasStreamURL;
@property (copy, nonatomic) NSString *pullDataExtra;
@property (copy, nonatomic) NSString *pushDataExtra;

+ (id)descriptor;

@end
