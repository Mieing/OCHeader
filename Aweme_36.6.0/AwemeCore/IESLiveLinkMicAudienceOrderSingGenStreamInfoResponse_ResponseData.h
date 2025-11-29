@class NSMutableArray;

@interface IESLiveLinkMicAudienceOrderSingGenStreamInfoResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *streamInfosArray;
@property (readonly, nonatomic) unsigned long long streamInfosArray_Count;

+ (id)descriptor;

@end
