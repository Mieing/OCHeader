@class NSString, GPBInt64ObjectDictionary;

@interface IESLivePreRTCInfo : IESLivePBBaseMessage

@property (retain, nonatomic) GPBInt64ObjectDictionary *preRtcUserInfo;
@property (readonly, nonatomic) unsigned long long preRtcUserInfo_Count;
@property (nonatomic) long long version;
@property (nonatomic) BOOL rtcJoinChannel;
@property (copy, nonatomic) NSString *versionStr;

+ (id)descriptor;

@end
