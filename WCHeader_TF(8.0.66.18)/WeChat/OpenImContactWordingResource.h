@class NSString;

@interface OpenImContactWordingResource : NSObject <PBCoding>

@property (nonatomic) unsigned int updateTime;
@property (retain, nonatomic) NSString *language;
@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) NSString *pinyin;
@property (retain, nonatomic) NSString *quanpin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_updateTime;
+ (void)PBArrayAdd_language;
+ (void)PBArrayAdd_content;
+ (void)PBArrayAdd_pinyin;
+ (void)PBArrayAdd_quanpin;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
