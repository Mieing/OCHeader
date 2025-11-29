@class NSString, UIPasteboard, UTDIDHelper, UTDIDPersistentConf;

@interface UTDIDMain : NSObject {
    UIPasteboard *mUIPasteBoard;
    NSString *mFilePath;
    UTDIDHelper *mUtdidHelper;
    UTDIDPersistentConf *mDevicePersistentConfig;
}

+ (id)generateUtdid;
+ (id)uniqueGlobalDeviceIdentifier;

- (void)preInit;
- (BOOL)isUtdidValid:(id)a0;
- (void)saveUtdid:(id)a0;
- (id)generateUtdidAndSave;
- (void)removeUtdid;
- (void)testInit;
- (id)getUTDIDFromOldNSUserDefaults;
- (id)getUTDIDFromOldUIPasteboard;
- (id)getUTDIDFromOldKeyChain;
- (id)NSData2Str:(id)a0;
- (void).cxx_destruct;
- (id)value;

@end
