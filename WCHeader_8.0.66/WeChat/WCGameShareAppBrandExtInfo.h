@class NSString;

@interface WCGameShareAppBrandExtInfo : NSObject <NSCoding, PBCoding>

@property (copy, nonatomic) NSString *liteGameInfo;
@property (nonatomic) unsigned int priority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_liteGameInfo;
+ (void)PBArrayAdd_priority;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
