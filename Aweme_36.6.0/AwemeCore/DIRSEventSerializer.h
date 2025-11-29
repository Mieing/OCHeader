@class NSString;

@interface DIRSEventSerializer : DIRSBasicModule <IRISEventSerializer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)moduleId;
+ (id)allowedParameterFields;
+ (BOOL)isPlugin;
+ (id)moduleVersion;

- (id)eventWithDictionary:(id)a0 options:(id)a1 error:(id *)a2;
- (id)_toDictionary:(id)a0;
- (id)dataWithEvent:(id)a0 options:(id)a1 error:(id *)a2;
- (id)eventWithData:(id)a0 options:(id)a1 error:(id *)a2;
- (unsigned long long)encodingType;

@end
