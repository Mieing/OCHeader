@class NSString, NSSet;
@protocol GTMKeychainHelper;

@interface GTMKeychainStore : NSObject <GTMAuthSessionStore> {
    void /* unknown type, empty encoding */ lastUsedKeyedArchiver;
    void /* unknown type, empty encoding */ lastUsedKeyedUnarchiver;
    void /* function */ itemName;
    void /* function */ keychainAttributes;
}

@property (nonatomic, readonly) id<GTMKeychainHelper> keychainHelper;
@property (nonatomic, copy) NSString *itemName;
@property (nonatomic, copy) NSSet *keychainAttributes;

- (id)initWithItemName:(id)a0 keychainAttributes:(id)a1 keychainHelper:(id)a2;
- (id)initWithItemName:(id)a0 keychainHelper:(id)a1;
- (id)initWithItemName:(id)a0 keychainAttributes:(id)a1;
- (id)initWithItemName:(id)a0;
- (BOOL)saveAuthSession:(id)a0 error:(id *)a1;
- (BOOL)saveAuthSession:(id)a0 withItemName:(id)a1 error:(id *)a2;
- (BOOL)removeAuthSessionWithItemName:(id)a0 error:(id *)a1;
- (BOOL)removeAuthSessionWithError:(id *)a0;
- (id)retrieveAuthSessionWithItemName:(id)a0 error:(id *)a1;
- (id)retrieveAuthSessionWithError:(id *)a0;
- (id)retrieveAuthSessionInGTMOAuth2FormatWithTokenURL:(id)a0 redirectURI:(id)a1 clientID:(id)a2 clientSecret:(id)a3 error:(id *)a4;
- (id)retrieveAuthSessionForGoogleInGTMOAuth2FormatWithClientID:(id)a0 clientSecret:(id)a1 error:(id *)a2;
- (BOOL)saveWithGTMOAuth2FormatForAuthSession:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;

@end
