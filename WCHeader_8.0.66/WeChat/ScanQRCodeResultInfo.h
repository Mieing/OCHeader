@class NSString;

@interface ScanQRCodeResultInfo : MMObject <PBCoding>

@property (copy, nonatomic) NSString *resultString;
@property (nonatomic) unsigned int timeStamp;
@property (nonatomic) unsigned int fromScene;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) int codeVersion;
@property (nonatomic) BOOL scanFromAlbum;
@property (nonatomic) int networkType;
@property (nonatomic) BOOL scanFromCombineTab;
@property (nonatomic) BOOL hasProceed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_resultString;
+ (void)PBArrayAdd_timeStamp;
+ (void)PBArrayAdd_fromScene;
+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_codeVersion;
+ (void)PBArrayAdd_scanFromAlbum;
+ (void)PBArrayAdd_networkType;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
