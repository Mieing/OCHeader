@class NSString, NSMutableDictionary;

@interface OpenIMContactExtendCodePB : NSObject <PBCoding>

@property (retain, nonatomic) NSMutableDictionary *configDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_configDic;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
