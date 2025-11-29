@class NSArray, NSString;

@interface WCAdRandomPickComponentExtInfo : NSObject <NSCoding, PBCoding>

@property (retain, nonatomic) NSArray *pickedCardsList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_pickedCardsList;
+ (void)initialize;
+ (id)fromResponseExtInfo:(id)a0;

- (id)getPBPropertyTable;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)mergeWithExtInfo:(id)a0;
- (void).cxx_destruct;

@end
