@class NSString, NSDictionary;

@interface LynxMemoryRecord : NSObject

@property (copy, nonatomic) NSString *category;
@property (nonatomic) long long sizeBytes;
@property (nonatomic) int instanceCount;
@property (retain, nonatomic) NSDictionary *detail;

- (id)initWithCategory:(id)a0 sizeBytes:(long long)a1 detail:(id)a2;
- (void).cxx_destruct;

@end
