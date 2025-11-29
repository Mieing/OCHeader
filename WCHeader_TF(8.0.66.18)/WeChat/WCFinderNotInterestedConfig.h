@class NSString;

@interface WCFinderNotInterestedConfig : NSObject <PBCoding>

@property (nonatomic) long long subType;
@property (retain, nonatomic) NSString *wording;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_subType;
+ (void)PBArrayAdd_wording;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
