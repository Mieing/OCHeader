@class NSString;

@interface BrandDebugCanvasTmplMsg : NSObject <PBCoding>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) unsigned int bizType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_content;
+ (void)PBArrayAdd_bizType;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
