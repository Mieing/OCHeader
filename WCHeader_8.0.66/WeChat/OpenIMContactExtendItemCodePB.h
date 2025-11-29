@class NSString;

@interface OpenIMContactExtendItemCodePB : NSObject <PBCoding>

@property (nonatomic) BOOL hadShowSucceedContactWindow;
@property (nonatomic) BOOL hadSucceedContact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_hadShowSucceedContactWindow;
+ (void)PBArrayAdd_hadSucceedContact;
+ (void)initialize;

- (id)getPBPropertyTable;

@end
