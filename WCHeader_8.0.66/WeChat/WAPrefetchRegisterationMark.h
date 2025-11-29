@class NSString, NSMutableDictionary;

@interface WAPrefetchRegisterationMark : NSObject <PBCoding>

@property (retain, nonatomic) NSMutableDictionary *dicGetCodeSequenceCheckMarks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_dicGetCodeSequenceCheckMarks;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
