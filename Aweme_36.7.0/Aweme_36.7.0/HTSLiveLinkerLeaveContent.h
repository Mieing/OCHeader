@class GPBInt64ObjectDictionary, NSString, IESLiveMultiChannelInfo, IESLivePreRTCInfo, IESLiveClientUIInfo, NSMutableArray, IESLiveListUser;

@interface HTSLiveLinkerLeaveContent : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *userId;
@property (retain, nonatomic) NSMutableArray *linkedUsersArray;
@property (readonly, nonatomic) unsigned long long linkedUsersArray_Count;
@property (retain, nonatomic) IESLiveListUser *user;
@property (nonatomic) BOOL hasUser;
@property (retain, nonatomic) NSMutableArray *preLinkUsersArray;
@property (readonly, nonatomic) unsigned long long preLinkUsersArray_Count;
@property (nonatomic) unsigned long long version;
@property (retain, nonatomic) GPBInt64ObjectDictionary *linkerContentMap;
@property (readonly, nonatomic) unsigned long long linkerContentMap_Count;
@property (nonatomic) int leaveSource;
@property (retain, nonatomic) IESLivePreRTCInfo *preRtcInfo;
@property (nonatomic) BOOL hasPreRtcInfo;
@property (retain, nonatomic) IESLiveMultiChannelInfo *multiChannelInfo;
@property (nonatomic) BOOL hasMultiChannelInfo;
@property (retain, nonatomic) NSMutableArray *listUsersArray;
@property (readonly, nonatomic) unsigned long long listUsersArray_Count;
@property (nonatomic) long long preRtcVersion;
@property (retain, nonatomic) IESLiveClientUIInfo *clientUiInfo;
@property (nonatomic) BOOL hasClientUiInfo;

+ (id)descriptor;

@end
