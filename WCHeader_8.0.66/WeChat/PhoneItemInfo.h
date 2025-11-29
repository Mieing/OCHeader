@class NSString;

@interface PhoneItemInfo : NSObject <PBCoding, NSCoding>

@property (nonatomic) BOOL bFromHash;
@property (nonatomic) long long index;
@property (retain, nonatomic) NSString *phoneNum;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_phoneNum;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
