@class NSString, NSMutableArray;

@interface ResendFavItem : NSObject <PBCoding>

@property (nonatomic) unsigned int favId;
@property (nonatomic) unsigned int localFavId;
@property (retain, nonatomic) NSMutableArray *fileIdList;
@property (nonatomic) unsigned int itemStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_favId;
+ (void)PBArrayAdd_localFavId;
+ (void)PBArrayAdd_fileIdList;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;
- (void).cxx_destruct;

@end
