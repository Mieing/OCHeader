@class NSString, NSMutableArray;

@interface IESLiveLinkMicAudienceFastMatchV2Response_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *resultItemArray;
@property (readonly, nonatomic) unsigned long long resultItemArray_Count;
@property (copy, nonatomic) NSString *reqId;

+ (id)descriptor;

@end
