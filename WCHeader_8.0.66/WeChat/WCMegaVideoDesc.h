@class WCMegaVideoLocation, NSString, WCMegaVideoExtendedReading, NSMutableArray;

@interface WCMegaVideoDesc : NSObject <WCTColumnCoding, PBCoding>

@property (copy, nonatomic) NSString *videoDescription;
@property (retain, nonatomic) NSMutableArray *mediaList;
@property (nonatomic) unsigned long long mediaType;
@property (copy, nonatomic) NSString *mixedBuffer;
@property (retain, nonatomic) WCMegaVideoLocation *location;
@property (retain, nonatomic) WCMegaVideoExtendedReading *extReading;
@property (retain, nonatomic) WCMegaVideoLocation *feedLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_videoDescription;
+ (void)PBArrayAdd_mediaList;
+ (void)PBArrayAdd_mediaType;
+ (void)PBArrayAdd_mixedBuffer;
+ (void)PBArrayAdd_location;
+ (void)PBArrayAdd_extReading;
+ (void)PBArrayAdd_feedLocation;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnTypeForWCDB;

- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (id)initWithMegaVideoDesc:(id)a0;
- (id)genMegaVideoDesc;
- (void).cxx_destruct;

@end
