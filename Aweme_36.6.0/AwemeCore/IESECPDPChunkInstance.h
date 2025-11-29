@interface IESECPDPChunkInstance : NSObject

@property (nonatomic) BOOL chunkFailedTag;

+ (void)chunkFailed;
+ (id)shareInstance;

@end
