@class NSMutableArray;

@interface GetLinkerUserResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *userListArray;
@property (readonly, nonatomic) unsigned long long userListArray_Count;
@property (nonatomic) long long linkerId;

+ (id)descriptor;

@end
