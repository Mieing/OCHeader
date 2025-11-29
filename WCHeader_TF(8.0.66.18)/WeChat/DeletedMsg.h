@class NSString;

@interface DeletedMsg : NSObject <PBCoding>

@property (nonatomic) long long msgSvrId;
@property (nonatomic) unsigned int createTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_msgSvrId;
+ (void)PBArrayAdd_createTime;
+ (void)initialize;

- (id)getPBPropertyTable;

@end
