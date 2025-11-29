@class ShelfInfo;

@interface ModifyShelfResponse_Data : IESLivePBBaseMessage

@property (retain, nonatomic) ShelfInfo *shelfInfo;
@property (nonatomic) BOOL hasShelfInfo;

+ (id)descriptor;

@end
