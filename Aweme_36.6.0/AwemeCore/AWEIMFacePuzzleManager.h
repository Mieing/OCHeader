@class NSString;

@interface AWEIMFacePuzzleManager : NSObject <AWEIMFacePuzzleManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)decryptImage:(id)a0;
+ (id)p_decryptImage:(id)a0;
+ (id)sharedInstance;

- (id)buildSchema:(id)a0 params:(id)a1;

@end
