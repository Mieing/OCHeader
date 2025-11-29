@class NSMutableArray;

@interface IESECListKitChunkManager : NSObject

@property (retain, nonatomic) NSMutableArray *requestArr;

+ (id)shareInstance;

- (void).cxx_destruct;
- (void)addRequest:(id)a0;
- (void)removeRequest:(id)a0;

@end
