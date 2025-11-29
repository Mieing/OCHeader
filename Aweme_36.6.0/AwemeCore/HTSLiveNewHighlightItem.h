@class HTSLiveNewHighlightDataComment, HTSLiveNewHighlightDataCommonText, HTSLiveNewHighlightDataAnswer, HTSLiveNewHighlightDataImCommon, HTSLiveNewHighlightDataCommonPictureText, HTSLiveNewPosition, NSMutableDictionary, HTSLiveNewHighlightDataVideo, HTSLiveNewHighlightDataAppointment, HTSLiveHighlightAreaPriorityConfig, HTSLiveNewHighlightDataMicroApp;

@interface HTSLiveNewHighlightItem : IESLivePBBaseMessage

@property (nonatomic) long long itemId;
@property (nonatomic) long long version;
@property (nonatomic) long long endTime;
@property (retain, nonatomic) HTSLiveNewPosition *position;
@property (nonatomic) BOOL hasPosition;
@property (retain, nonatomic) HTSLiveHighlightAreaPriorityConfig *highlightAreaPriorityConfig;
@property (nonatomic) BOOL hasHighlightAreaPriorityConfig;
@property (nonatomic) int dataType;
@property (retain, nonatomic) HTSLiveNewHighlightDataCommonText *commonText;
@property (nonatomic) BOOL hasCommonText;
@property (retain, nonatomic) HTSLiveNewHighlightDataAppointment *appointmentData;
@property (nonatomic) BOOL hasAppointmentData;
@property (retain, nonatomic) HTSLiveNewHighlightDataAnswer *answerData;
@property (nonatomic) BOOL hasAnswerData;
@property (retain, nonatomic) HTSLiveNewHighlightDataComment *commentData;
@property (nonatomic) BOOL hasCommentData;
@property (retain, nonatomic) HTSLiveNewHighlightDataVideo *videoData;
@property (nonatomic) BOOL hasVideoData;
@property (retain, nonatomic) HTSLiveNewHighlightDataMicroApp *microAppData;
@property (nonatomic) BOOL hasMicroAppData;
@property (retain, nonatomic) HTSLiveNewHighlightDataImCommon *imCommonData;
@property (nonatomic) BOOL hasImCommonData;
@property (retain, nonatomic) HTSLiveNewHighlightDataCommonPictureText *commonPictureTextData;
@property (nonatomic) BOOL hasCommonPictureTextData;
@property (retain, nonatomic) NSMutableDictionary *buriedPoint;
@property (readonly, nonatomic) unsigned long long buriedPoint_Count;

+ (id)descriptor;

@end
