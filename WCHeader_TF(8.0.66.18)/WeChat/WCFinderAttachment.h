@class NSString, WCFinderVideoAttachment, FinderJumpInfoAttachment;

@interface WCFinderAttachment : NSObject <WCTColumnCoding, PBCoding>

@property (nonatomic) int type;
@property (retain, nonatomic) WCFinderVideoAttachment *videoAttachment;
@property (retain, nonatomic) FinderJumpInfoAttachment *jumpInfoAttachment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_videoAttachment;
+ (void)PBArrayAdd_jumpInfoAttachment;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnTypeForWCDB;

- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (id)initWithFinderAttachment:(id)a0;
- (id)genFinderAttachment;
- (id)genFinderJupmInfo;
- (void).cxx_destruct;

@end
