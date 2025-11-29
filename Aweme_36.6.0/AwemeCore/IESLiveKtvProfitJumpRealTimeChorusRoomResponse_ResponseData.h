@class NSString, GPBInt64Array;

@interface IESLiveKtvProfitJumpRealTimeChorusRoomResponse_ResponseData : IESLivePBBaseMessage

@property (nonatomic) long long roomId;
@property (nonatomic) BOOL joinChorus;
@property (copy, nonatomic) NSString *toast;
@property (retain, nonatomic) GPBInt64Array *slideRoomsArray;
@property (readonly, nonatomic) unsigned long long slideRoomsArray_Count;

+ (id)descriptor;

@end
