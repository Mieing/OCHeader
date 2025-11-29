@class EntranceVision;

@interface EntranceVisionResponse_Data : IESLivePBBaseMessage

@property (retain, nonatomic) EntranceVision *entranceVision;
@property (nonatomic) BOOL hasEntranceVision;

+ (id)descriptor;

@end
