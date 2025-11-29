@class NSMutableArray;

@interface IESLiveRivalExtraInfo_LinkerInfo : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *linkedUsersArray;
@property (readonly, nonatomic) unsigned long long linkedUsersArray_Count;

+ (id)descriptor;

@end
