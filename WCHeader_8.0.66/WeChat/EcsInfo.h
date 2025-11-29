@class NSString;

@interface EcsInfo : NSObject <NSCoding, PBCoding>

@property (retain, nonatomic) NSString *ecsJumpInfoBase64;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_ecsJumpInfoBase64;
+ (void)initialize;
+ (id)fromXML:(struct XmlReaderNode_t { } *)a0;

- (id)getPBPropertyTable;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)toXML;
- (void).cxx_destruct;

@end
