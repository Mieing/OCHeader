@class NSData, NSString;

@interface MMResSignatureInfo : MMObject <PBCoding>

@property (nonatomic) unsigned int version;
@property (retain, nonatomic) NSData *signatureData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_version;
+ (void)PBArrayAdd_signatureData;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
