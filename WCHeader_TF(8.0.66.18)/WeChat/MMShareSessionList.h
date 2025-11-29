@class NSArray, NSString;

@interface MMShareSessionList : NSObject <PBCoding>

@property (retain, nonatomic) NSArray *sessionList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_sessionList;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
