@class NSString;

@interface ShakeWeAppItem : NSObject <PBCoding, NSCoding, NSCopying>

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *thumbUrl;
@property (retain, nonatomic) NSString *weAppUsername;
@property (retain, nonatomic) NSString *path;
@property (nonatomic) unsigned int version;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_thumbUrl;
+ (void)PBArrayAdd_weAppUsername;
+ (void)PBArrayAdd_path;
+ (void)PBArrayAdd_version;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
