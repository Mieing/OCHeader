@class NSString, NSMutableDictionary;

@interface WAFileSpaceStatus : NSObject <PBCoding>

@property (nonatomic) unsigned long long totalFileSize;
@property (retain, nonatomic) NSMutableDictionary *dicAppItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_dicAppItem;
+ (void)initialize;

@end
