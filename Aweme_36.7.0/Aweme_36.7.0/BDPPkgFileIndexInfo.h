@class NSString;

@interface BDPPkgFileIndexInfo : NSObject <NSCoding>

@property (copy, nonatomic) NSString *filePath;
@property (nonatomic) unsigned int offset;
@property (nonatomic) unsigned int size;
@property (readonly, nonatomic) unsigned int endOffset;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)debugDescription;

@end
