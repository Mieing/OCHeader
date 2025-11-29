@class NSString, NSMutableDictionary;

@interface MBFileSpaceStatus : NSObject <PBCoding>

@property (nonatomic) unsigned long long totalFileSize;
@property (retain, nonatomic) NSMutableDictionary *dicBizItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_dicBizItem;
+ (void)initialize;

@end
