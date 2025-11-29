@class NSString;

@interface ShakeUserItem : NSObject <PBCoding, NSCoding, NSCopying>

@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *showchat;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_nickname;
+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_showchat;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
