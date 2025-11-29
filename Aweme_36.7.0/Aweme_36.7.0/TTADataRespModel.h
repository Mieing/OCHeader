@class NSString;

@interface TTADataRespModel : NSObject <TTResponseModelProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)propertyIsOptional:(id)a0;

- (id)errcode;
- (id)errmsg;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (id)toDictionary;
- (id)valueForUndefinedKey:(id)a0;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;

@end
