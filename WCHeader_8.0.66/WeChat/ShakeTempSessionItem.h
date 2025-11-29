@class NSString;

@interface ShakeTempSessionItem : NSObject <PBCoding, NSCoding, NSCopying>

@property (retain, nonatomic) NSString *brandUserName;
@property (retain, nonatomic) NSString *deeplinkUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_brandUserName;
+ (void)PBArrayAdd_deeplinkUrl;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
