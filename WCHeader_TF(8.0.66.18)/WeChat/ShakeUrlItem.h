@class NSString;

@interface ShakeUrlItem : NSObject <PBCoding, NSCoding, NSCopying>

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *link;
@property (retain, nonatomic) NSString *thumbUrl;
@property (retain, nonatomic) NSString *username;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_link;
+ (void)PBArrayAdd_thumbUrl;
+ (void)PBArrayAdd_username;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
