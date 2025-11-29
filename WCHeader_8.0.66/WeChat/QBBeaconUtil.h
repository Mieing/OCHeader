@interface QBBeaconUtil : NSObject

+ (id)getFilePathWithName:(id)a0;
+ (id)getIDFV;
+ (id)getIDFA;
+ (id)generateAesKey;
+ (id)addParamWithSIdForUploadUrl:(id)a0 sessionId:(id)a1;
+ (id)base64Encode:(id)a0;

@end
