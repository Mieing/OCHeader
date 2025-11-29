@interface AWEAIImageExpandRuntime : NSObject

@property (nonatomic) double beginTime;
@property BOOL isCancel;

- (double)timeDiff;
- (id)init;

@end
