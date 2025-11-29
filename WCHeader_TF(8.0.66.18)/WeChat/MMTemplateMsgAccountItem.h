@class NSString;

@interface MMTemplateMsgAccountItem : MMObject <PBCoding>

@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *avatarUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_userName;
+ (void)PBArrayAdd_nickName;
+ (void)PBArrayAdd_avatarUrl;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
