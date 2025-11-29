@class NSString;

@interface StickerRecord : IESLivePBBaseMessage

@property (nonatomic) int stickerType;
@property (copy, nonatomic) NSString *recordId;

+ (id)descriptor;

@end
