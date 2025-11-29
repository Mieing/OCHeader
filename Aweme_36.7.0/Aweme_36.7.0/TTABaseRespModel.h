@class NSNumber, NSString;

@interface TTABaseRespModel : NSObject <TTResponseModelProtocol>

@property (retain, nonatomic) NSNumber *ttaCreateTimeStamp;
@property (copy, nonatomic) NSString *message;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)propertyIsOptional:(id)a0;
+ (BOOL)propertyIsIgnored:(id)a0;

- (BOOL)isClientError;
- (BOOL)isRespSuccess;
- (id)errcodeInData;
- (BOOL)isOtherRespError;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (id)errorDescription;
- (long long)errorCode;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)valueForUndefinedKey:(id)a0;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id)init;
- (BOOL)isServerError;

@end
