@class NSString, HTSLiveImage, NSMutableArray;

@interface HTSLiveRelaxAppointmentSubscribeListResponse_ResponseData : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (retain, nonatomic) HTSLiveImage *image;
@property (nonatomic) BOOL hasImage;
@property (nonatomic) int typ;
@property (nonatomic) long long appointmentId;
@property (copy, nonatomic) NSString *appointmentIdStr;
@property (nonatomic) int cycle;
@property (nonatomic) long long total;
@property (retain, nonatomic) NSMutableArray *itemsArray;
@property (readonly, nonatomic) unsigned long long itemsArray_Count;

+ (id)descriptor;

@end
