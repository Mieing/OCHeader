@class NSString, NSMutableDictionary;

@interface SessionFoldCache : NSObject <PBCoding>

@property (retain, nonatomic) NSMutableDictionary *dicUserNameFold;
@property (nonatomic) BOOL isFolded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_dicUserNameFold;
+ (void)PBArrayAdd_isFolded;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
