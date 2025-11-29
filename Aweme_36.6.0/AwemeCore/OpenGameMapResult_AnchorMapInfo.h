@class NSMutableArray;

@interface OpenGameMapResult_AnchorMapInfo : IESLivePBBaseMessage

@property (nonatomic) long long posX;
@property (nonatomic) long long posY;
@property (retain, nonatomic) NSMutableArray *usersArray;
@property (readonly, nonatomic) unsigned long long usersArray_Count;
@property (nonatomic) long long score;
@property (nonatomic) long long rank;
@property (nonatomic) long long level;
@property (nonatomic) long long iconSize;

+ (id)descriptor;

@end
