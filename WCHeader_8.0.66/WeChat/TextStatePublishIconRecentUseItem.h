@class NSString;

@interface TextStatePublishIconRecentUseItem : NSObject <PBCoding>

@property (retain, nonatomic) NSString *iconId;
@property (retain, nonatomic) NSString *iconDescription;
@property (nonatomic) unsigned int useTime;
@property (nonatomic) unsigned int isCustom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_iconId;
+ (void)PBArrayAdd_iconDescription;
+ (void)PBArrayAdd_useTime;
+ (void)PBArrayAdd_isCustom;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)key;
- (BOOL)isValid;
- (BOOL)hasExpired;
- (long long)compare:(id)a0;
- (BOOL)isEqualToItem:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
