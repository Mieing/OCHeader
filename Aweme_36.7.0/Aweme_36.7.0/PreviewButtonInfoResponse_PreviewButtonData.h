@class HTSLiveRoom;

@interface PreviewButtonInfoResponse_PreviewButtonData : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveRoom *room;
@property (nonatomic) BOOL hasRoom;

+ (id)descriptor;

@end
