@class NSMutableArray;

@interface IESLiveLinkMicAudiencePromoteLiveAnchorPointResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *pointsArray;
@property (readonly, nonatomic) unsigned long long pointsArray_Count;

+ (id)descriptor;

@end
