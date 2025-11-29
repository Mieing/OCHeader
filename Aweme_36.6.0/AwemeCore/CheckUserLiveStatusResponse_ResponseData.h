@class NSMutableArray;

@interface CheckUserLiveStatusResponse_ResponseData : IESLivePBBaseMessage

@property (nonatomic) long long sceneId;
@property (retain, nonatomic) NSMutableArray *userLiveArray;
@property (readonly, nonatomic) unsigned long long userLiveArray_Count;

+ (id)descriptor;

- (unsigned long long)userLiveArray_Count;
- (long long)sceneId;

@end
