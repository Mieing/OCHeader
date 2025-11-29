@class NSString;

@interface RxIntPK : NSObject <RxPrimaryKey>

@property (nonatomic) long long ID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)intPKWithID:(long long)a0;

- (id)getInKey;
- (long long)numericIDKey;
- (id)initWithID:(long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
