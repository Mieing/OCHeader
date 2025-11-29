@class NSString;

@interface WCFinderMsgSessionOwnerInfo : NSObject <PBCoding>

@property (retain, nonatomic) NSString *owner;
@property (nonatomic) BOOL hasSetDefaultOwner;
@property (retain, nonatomic) NSString *lastOwner;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_owner;
+ (void)PBArrayAdd_hasSetDefaultOwner;
+ (void)PBArrayAdd_lastOwner;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
