@class NSString;

@interface WCLiteAppInfo : NSObject <NSCoding, PBCoding>

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *query;
@property (nonatomic) BOOL isTransparent;
@property (nonatomic) BOOL hideIcon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_appId;
+ (void)PBArrayAdd_path;
+ (void)PBArrayAdd_query;
+ (void)PBArrayAdd_isTransparent;
+ (void)PBArrayAdd_hideIcon;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
