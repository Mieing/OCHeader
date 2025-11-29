@class NSString, HTSLiveColumnLabel, GPBInt32Array, NSMutableArray, HTSLiveAnchorInfo;

@interface HTSLiveAnchorColumn : IESLivePBBaseMessage

@property (nonatomic) long long id_p;
@property (copy, nonatomic) NSString *idStr;
@property (copy, nonatomic) NSString *backgroundPicture;
@property (copy, nonatomic) NSString *backgroundColor;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *description_p;
@property (retain, nonatomic) NSMutableArray *appointmentsArray;
@property (readonly, nonatomic) unsigned long long appointmentsArray_Count;
@property (retain, nonatomic) NSMutableArray *replayInfoArray;
@property (readonly, nonatomic) unsigned long long replayInfoArray_Count;
@property (nonatomic) int status;
@property (retain, nonatomic) GPBInt32Array *auditFailedReasonArray;
@property (readonly, nonatomic) unsigned long long auditFailedReasonArray_Count;
@property (retain, nonatomic) HTSLiveAnchorInfo *anchorInfo;
@property (nonatomic) BOOL hasAnchorInfo;
@property (nonatomic) BOOL subscribed;
@property (nonatomic) long long otherColumnCount;
@property (retain, nonatomic) HTSLiveColumnLabel *label;
@property (nonatomic) BOOL hasLabel;
@property (nonatomic) BOOL playback;
@property (nonatomic) int syncToLiveRoomTime;
@property (nonatomic) BOOL showMoreColumn;
@property (copy, nonatomic) NSString *notLoginBackgroundPicture;

+ (id)descriptor;

@end
