@class NSString;

@interface WAPrefetchGetCodeSequenceCheckMark : NSObject <PBCoding>

@property (nonatomic) unsigned int expirationTimeStamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_expirationTimeStamp;
+ (void)initialize;

- (id)getPBPropertyTable;

@end
