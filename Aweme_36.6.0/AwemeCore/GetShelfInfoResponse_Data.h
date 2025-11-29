@class ShelfInfo;

@interface GetShelfInfoResponse_Data : IESLivePBBaseMessage

@property (retain, nonatomic) ShelfInfo *shelfInfo;
@property (nonatomic) BOOL hasShelfInfo;
@property (nonatomic) BOOL disableEntrance;

+ (id)descriptor;

@end
