@class NSString;

@interface TextStatePassthroughIcon : NSObject <PBCoding>

@property (retain, nonatomic) NSString *iconId;
@property (nonatomic) unsigned int beginTime;
@property (nonatomic) unsigned int endTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_iconId;
+ (void)PBArrayAdd_beginTime;
+ (void)PBArrayAdd_endTime;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)initWithIcon:(id)a0;
- (BOOL)isActive;
- (id)identifier;
- (void).cxx_destruct;

@end
