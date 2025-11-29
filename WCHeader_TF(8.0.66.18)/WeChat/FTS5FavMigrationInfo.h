@class NSString;

@interface FTS5FavMigrationInfo : NSObject <PBCoding>

@property (nonatomic) unsigned int start;
@property (nonatomic) unsigned int end;
@property (nonatomic) unsigned int msgCount;
@property (nonatomic) unsigned int pageCount;
@property (nonatomic) unsigned int favMsgCount;
@property (nonatomic) unsigned int sessionCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_start;
+ (void)PBArrayAdd_end;
+ (void)PBArrayAdd_msgCount;
+ (void)PBArrayAdd_pageCount;
+ (void)PBArrayAdd_favMsgCount;
+ (void)PBArrayAdd_sessionCount;
+ (void)initialize;

- (id)getPBPropertyTable;

@end
