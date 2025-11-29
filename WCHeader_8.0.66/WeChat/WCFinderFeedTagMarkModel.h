@class NSString;

@interface WCFinderFeedTagMarkModel : NSObject <PBCoding>

@property (nonatomic) unsigned long long flag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_flag;
+ (void)initialize;

- (id)getPBPropertyTable;

@end
