@class NSString;

@interface WCMegaVideoBulletComment : NSObject <WCTColumnCoding, PBCoding>

@property (nonatomic) unsigned long long commentId;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) unsigned long long videoTimestamp;
@property (nonatomic) unsigned long long createTime;
@property (nonatomic) int extFlag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_commentId;
+ (void)PBArrayAdd_content;
+ (void)PBArrayAdd_videoTimestamp;
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_extFlag;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnTypeForWCDB;

- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (id)initWithMegaVideoBulletCommentInfo:(id)a0;
- (double)appearPoint;
- (BOOL)isMine;
- (BOOL)isAuthor;
- (BOOL)isBothMineAndAuthor;
- (id)bulletItem;
- (void).cxx_destruct;

@end
