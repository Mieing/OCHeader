@class NSMutableArray;

@interface TPBufferedRecord : NSObject

@property (nonatomic) BOOL isBuffering;
@property (retain, nonatomic) NSMutableArray *bufferedStepArray;

- (void).cxx_destruct;

@end
