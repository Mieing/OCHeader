@interface HTSLiveRoomSpecificSceneTypeInfo : IESLivePBBaseMessage

@property (nonatomic) BOOL isUnionLiveRoom;
@property (nonatomic) BOOL isLife;
@property (nonatomic) int isProtectedRoom;
@property (nonatomic) int isLastedGoodsRoom;
@property (nonatomic) int isDesireRoom;
@property (nonatomic) BOOL commentaryType;
@property (nonatomic) int isSubOrientationVerticalRoom;

+ (id)descriptor;

- (int)isLastedGoodsRoom;
- (BOOL)isUnionLiveRoom;
- (BOOL)isLife;

@end
