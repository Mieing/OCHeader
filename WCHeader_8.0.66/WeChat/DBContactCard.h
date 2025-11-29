@class NSString;

@interface DBContactCard : NSObject <PBCoding>

@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *aeskey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_url;
+ (void)PBArrayAdd_aeskey;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
