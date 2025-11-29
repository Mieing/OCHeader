@class NSArray, NSMutableArray;

@interface AWEMVFastLoadMoreManager : NSObject

@property (retain, nonatomic) NSMutableArray *buffer;
@property (readonly, nonatomic) BOOL isBufferEmpty;
@property (readonly, nonatomic) NSArray *bufferModels;
@property (readonly, nonatomic) long long bufferSize;

+ (id)sharedManager;

- (void)updateBuffer:(id)a0;
- (void).cxx_destruct;

@end
