@class GPBInt64BoolDictionary, NSMutableArray, HTSLiveImage;

@interface HTSLiveRoomChannelData : IESLivePBBaseMessage

@property (nonatomic) int status;
@property (retain, nonatomic) NSMutableArray *channelListArray;
@property (readonly, nonatomic) unsigned long long channelListArray_Count;
@property (nonatomic) int supportRoomChannelMode;
@property (nonatomic) int limitOfNum;
@property (nonatomic) BOOL canCreate;
@property (retain, nonatomic) HTSLiveImage *background;
@property (nonatomic) BOOL hasBackground;
@property (nonatomic) BOOL tabLanding;
@property (nonatomic) BOOL canLinkMic;
@property (retain, nonatomic) GPBInt64BoolDictionary *userInFansGroupMap;
@property (readonly, nonatomic) unsigned long long userInFansGroupMap_Count;
@property (retain, nonatomic) GPBInt64BoolDictionary *userChannelApplyMap;
@property (readonly, nonatomic) unsigned long long userChannelApplyMap_Count;
@property (nonatomic) BOOL hideLandscape;

+ (id)descriptor;

@end
