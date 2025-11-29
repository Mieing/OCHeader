@class NSString;

@interface MJTemplateFinderUserInfo : NSObject <PBCoding, NSCopying>

@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *headImgUrl;
@property (copy, nonatomic) NSString *signature;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_nickName;
+ (void)PBArrayAdd_headImgUrl;
+ (void)PBArrayAdd_signature;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)initWithFinderUserInfo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
