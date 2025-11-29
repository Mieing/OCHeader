@class NSString, BDLOneCardMetaData;

@interface BDLOneCardStorage : NSObject

@property (retain) BDLOneCardMetaData *metaData;
@property (retain, nonatomic) NSString *cardBundlePath;
@property (retain, nonatomic) NSString *cardStoragePath;

- (id)initWithMetaData:(id)a0;
- (BOOL)isCardExist;
- (void).cxx_destruct;

@end
