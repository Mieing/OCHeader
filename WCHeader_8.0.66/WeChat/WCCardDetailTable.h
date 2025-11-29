@class NSString, NSArray;

@interface WCCardDetailTable : MMObject <PBCoding>

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (nonatomic) unsigned int showNum;
@property (retain, nonatomic) NSArray *rows;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_subtitle;
+ (void)PBArrayAdd_showNum;
+ (void)PBArrayAdd_rows;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
