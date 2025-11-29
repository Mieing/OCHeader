@class NSString, HTSLiveRoom;

@interface HTSLiveFeedbackCard_RoomCardStruct : IESLivePBBaseMessage

@property (nonatomic) BOOL like;
@property (retain, nonatomic) HTSLiveRoom *data_p;
@property (nonatomic) BOOL hasData_p;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;

+ (id)descriptor;

@end
