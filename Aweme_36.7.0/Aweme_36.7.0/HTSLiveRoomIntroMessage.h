@class HTSLiveUser, NSString, HTSLiveCommon, AnchorLocationPoiInfo, RoomIntroAppointmentInfo, NSMutableArray, HTSLivePublicAreaCommon;

@interface HTSLiveRoomIntroMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (retain, nonatomic) HTSLiveUser *user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) long long style;
@property (copy, nonatomic) NSString *intro;
@property (retain, nonatomic) NSMutableArray *labelArray;
@property (readonly, nonatomic) unsigned long long labelArray_Count;
@property (nonatomic) long long introVideoItemId;
@property (copy, nonatomic) NSString *introVideoTitle;
@property (retain, nonatomic) NSMutableArray *selectedLabelsArray;
@property (readonly, nonatomic) unsigned long long selectedLabelsArray_Count;
@property (retain, nonatomic) NSMutableArray *introLabelsArray;
@property (readonly, nonatomic) unsigned long long introLabelsArray_Count;
@property (retain, nonatomic) HTSLivePublicAreaCommon *publicAreaCommon;
@property (nonatomic) BOOL hasPublicAreaCommon;
@property (nonatomic) BOOL poiEnabled;
@property (retain, nonatomic) RoomIntroAppointmentInfo *appointmentInfo;
@property (nonatomic) BOOL hasAppointmentInfo;
@property (retain, nonatomic) AnchorLocationPoiInfo *anchorLocationPoiInfo;
@property (nonatomic) BOOL hasAnchorLocationPoiInfo;

+ (id)descriptor;

@end
