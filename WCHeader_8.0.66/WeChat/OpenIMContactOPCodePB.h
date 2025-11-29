@class NSString, NSMutableArray;

@interface OpenIMContactOPCodePB : NSObject <PBCoding>

@property (retain, nonatomic) NSMutableArray *openIMContactOPList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_openIMContactOPList;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
