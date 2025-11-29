@class NSString, NSMutableDictionary;

@interface WCSiriContactList : NSObject <PBCoding>

@property (retain, nonatomic) NSMutableDictionary *contactDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_contactDict;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
