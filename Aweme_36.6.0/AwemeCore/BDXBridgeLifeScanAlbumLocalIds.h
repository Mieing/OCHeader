@class NSString, NSNumber;

@interface BDXBridgeLifeScanAlbumLocalIds : BDXBridgeModel

@property (copy, nonatomic) NSString *localId;
@property (retain, nonatomic) NSNumber *creatTime;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
