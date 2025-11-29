@class NSMutableArray;

@interface IESLiveLinkMicAudienceCheckLinkmicPermissionsResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *resultsArray;
@property (readonly, nonatomic) unsigned long long resultsArray_Count;

+ (id)descriptor;

@end
