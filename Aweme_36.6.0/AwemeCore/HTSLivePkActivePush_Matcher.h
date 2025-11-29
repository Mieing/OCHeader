@class NSString, NSMutableArray, HTSLiveRoom;

@interface HTSLivePkActivePush_Matcher : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *userId;
@property (retain, nonatomic) HTSLiveRoom *room;
@property (nonatomic) BOOL hasRoom;
@property (retain, nonatomic) NSMutableArray *tagsArray;
@property (readonly, nonatomic) unsigned long long tagsArray_Count;

+ (id)descriptor;

@end
