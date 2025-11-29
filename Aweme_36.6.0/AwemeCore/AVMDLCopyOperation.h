@class NSString;

@interface AVMDLCopyOperation : NSObject

@property (copy, nonatomic) NSString *destPath;
@property (copy, nonatomic) NSString *fileKey;
@property (nonatomic) BOOL waitIfCaching;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (nonatomic) BOOL forceCopy;
@property (copy, nonatomic) id /* block */ infoBlock;

- (id)initWithKey:(id)a0 destPath:(id)a1 completionBlock:(id /* block */)a2;
- (id)initWithKey:(id)a0 destPath:(id)a1 waitIfCaching:(BOOL)a2 completionBlock:(id /* block */)a3;
- (void).cxx_destruct;

@end
