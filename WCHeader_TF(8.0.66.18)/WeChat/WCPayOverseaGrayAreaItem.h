@class NSData, NSString;

@interface WCPayOverseaGrayAreaItem : NSObject <PBCoding>

@property (retain, nonatomic) NSData *name;
@property (retain, nonatomic) NSData *logoUrl;
@property (retain, nonatomic) NSData *clickUrl;
@property (retain, nonatomic) NSData *extraInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_name;
+ (void)PBArrayAdd_logoUrl;
+ (void)PBArrayAdd_clickUrl;
+ (void)PBArrayAdd_extraInfo;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
