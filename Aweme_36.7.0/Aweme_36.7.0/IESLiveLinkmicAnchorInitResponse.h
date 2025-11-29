@class IESLiveLinkmicAnchorInitResponse_ResponseData;

@interface IESLiveLinkmicAnchorInitResponse : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveLinkmicAnchorInitResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
