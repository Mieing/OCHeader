@class NSString;

@interface MMShareSessionItem : NSObject <PBCoding>

@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSString *dispalyName;
@property (nonatomic) BOOL showSuffixIcon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_nickname;
+ (void)PBArrayAdd_dispalyName;
+ (void)PBArrayAdd_showSuffixIcon;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
