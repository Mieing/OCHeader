@class WCMegaVideo, NSString;

@interface WCFinderVideoAttachment : NSObject <WCTColumnCoding, PBCoding>

@property (nonatomic) unsigned long long videoId;
@property (retain, nonatomic) WCMegaVideo *video;
@property (retain, nonatomic) NSString *videoNonceId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_videoId;
+ (void)PBArrayAdd_video;
+ (void)PBArrayAdd_videoNonceId;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnTypeForWCDB;

- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (id)initWithFinderVideoAttachment:(id)a0;
- (id)initWithMegaVideo:(id)a0;
- (id)genVideoAttachment;
- (void).cxx_destruct;

@end
