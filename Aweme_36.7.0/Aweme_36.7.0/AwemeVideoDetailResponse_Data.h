@class NSMutableDictionary;

@interface AwemeVideoDetailResponse_Data : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableDictionary *awemeVideoInfo;
@property (readonly, nonatomic) unsigned long long awemeVideoInfo_Count;

+ (id)descriptor;

@end
