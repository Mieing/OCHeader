@class YYDiskCache, SECLogTools;
@protocol SECCnphoctProtocol, SECTessaDiskTaskDelegate;

@interface SECTessaDiskTask : NSObject {
    SECLogTools *_logger;
}

@property (retain, nonatomic) YYDiskCache *disk;
@property (retain, nonatomic) id<SECCnphoctProtocol> cnphoct;
@property (retain, nonatomic) id<SECTessaDiskTaskDelegate> delegate;

- (id)loadFromDisk:(id)a0;
- (void)removeTessa:(id)a0;
- (id)allTessaIds;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)clearAll;
- (void)writeToDisk:(id)a0;

@end
