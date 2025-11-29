@class NSMutableArray;

@interface LZFileConfigInfo : NSObject <NSCoding>

@property (nonatomic) unsigned long long fileSize;
@property (retain, nonatomic) NSMutableArray *writeRanges;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
