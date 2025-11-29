@class AnchorLocationPoiInfo, NSString, NSMutableDictionary, RoomIntroAppointmentInfo, NSMutableArray, GetRoomIntroResponse_Data_PoiInfo;

@interface GetRoomIntroResponse_Data : IESLivePBBaseMessage

@property (nonatomic) BOOL introSwitch;
@property (retain, nonatomic) NSMutableDictionary *defaultLabels;
@property (readonly, nonatomic) unsigned long long defaultLabels_Count;
@property (retain, nonatomic) NSMutableArray *labelsArray;
@property (readonly, nonatomic) unsigned long long labelsArray_Count;
@property (copy, nonatomic) NSString *introduction;
@property (nonatomic) BOOL isTemplate;
@property (nonatomic) int introVideoSwitch;
@property (copy, nonatomic) NSString *introVideoLimitReason;
@property (nonatomic) long long introVideoItemId;
@property (copy, nonatomic) NSString *introVideoTitle;
@property (copy, nonatomic) NSString *introVideoCoverURL;
@property (nonatomic) long long introVideoDiggCount;
@property (nonatomic) BOOL introVideoDeletedRemind;
@property (copy, nonatomic) NSString *introVideoItemIdStr;
@property (nonatomic) BOOL needPopUpToSave;
@property (retain, nonatomic) NSMutableArray *selectableLabelsArray;
@property (readonly, nonatomic) unsigned long long selectableLabelsArray_Count;
@property (retain, nonatomic) NSMutableArray *selectedLabelsArray;
@property (readonly, nonatomic) unsigned long long selectedLabelsArray_Count;
@property (retain, nonatomic) NSMutableArray *optionalLabelsArray;
@property (readonly, nonatomic) unsigned long long optionalLabelsArray_Count;
@property (retain, nonatomic) NSMutableArray *introLabelsArray;
@property (readonly, nonatomic) unsigned long long introLabelsArray_Count;
@property (retain, nonatomic) NSMutableArray *labelGroupsArray;
@property (readonly, nonatomic) unsigned long long labelGroupsArray_Count;
@property (retain, nonatomic) NSMutableArray *introGuideButtonsArray;
@property (readonly, nonatomic) unsigned long long introGuideButtonsArray_Count;
@property (retain, nonatomic) GetRoomIntroResponse_Data_PoiInfo *poiInfo;
@property (nonatomic) BOOL hasPoiInfo;
@property (retain, nonatomic) RoomIntroAppointmentInfo *appointmentInfo;
@property (nonatomic) BOOL hasAppointmentInfo;
@property (retain, nonatomic) AnchorLocationPoiInfo *anchorLocationPoiInfo;
@property (nonatomic) BOOL hasAnchorLocationPoiInfo;

+ (id)descriptor;

@end
