@class NSString, NSMutableArray;

@interface TextStatePassthroughIconList : NSObject <PBCoding>

@property (retain, nonatomic) NSMutableArray *passthroughIconList;
@property (nonatomic) unsigned long long key;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_passthroughIconList;
+ (void)PBArrayAdd_key;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)initWithAgenda:(id)a0;
- (void).cxx_destruct;

@end
