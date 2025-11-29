@class NSData, NSMutableArray;

@interface WANativeBufferItem : NSObject

@property (retain, nonatomic) NSData *buffer;
@property (retain, nonatomic) NSMutableArray *waitingBlock;

- (id)init;
- (id)initWithLock;
- (void).cxx_destruct;

@end
