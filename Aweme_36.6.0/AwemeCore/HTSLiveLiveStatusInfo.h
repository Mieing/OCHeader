@class GPBInt32ObjectDictionary, NSString, HTSLiveUser;

@interface HTSLiveLiveStatusInfo : IESLivePBBaseMessage

@property (nonatomic) int liveStatus;
@property (retain, nonatomic) HTSLiveUser *liveUser;
@property (nonatomic) BOOL hasLiveUser;
@property (retain, nonatomic) GPBInt32ObjectDictionary *liveNotifyLight;
@property (readonly, nonatomic) unsigned long long liveNotifyLight_Count;
@property (copy, nonatomic) NSString *previewText;

+ (id)descriptor;

@end
