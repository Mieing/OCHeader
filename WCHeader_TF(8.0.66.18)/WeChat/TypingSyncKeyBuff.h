@class NSString;

@interface TypingSyncKeyBuff : NSObject <PBCoding>

@property (nonatomic) unsigned long long syncKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_syncKey;
+ (void)initialize;

- (id)getPBPropertyTable;

@end
