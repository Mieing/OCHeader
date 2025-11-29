@class NSString;

@interface QTCObjcTypeAutoCodingBaseWrapper : NSObject <QTCObjcTypeAutoCoding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)qtc_supportedObjcType;
+ (id)qtc_generateClassPropertyNames;

- (id)qtc_encodeWithValue:(id)a0;
- (id)qtc_decode;
- (id)qtc_getPropertyNames;
- (void)qtc_decodeWithCoder:(id)a0;
- (void)qtc_encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
