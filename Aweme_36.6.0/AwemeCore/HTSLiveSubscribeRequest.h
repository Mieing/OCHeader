@class NSMutableArray;

@interface HTSLiveSubscribeRequest : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *beSubscribedUserInfoListArray;
@property (readonly, nonatomic) unsigned long long beSubscribedUserInfoListArray_Count;

+ (id)descriptor;

@end
