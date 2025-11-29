@class NSString;

@interface AffEmoticonNativeHelperImpl : NSObject <AffEmoticonNativeHelperBase>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)saveData:(id)a0 path:(id)a1;
- (id)readData:(id)a0;

@end
