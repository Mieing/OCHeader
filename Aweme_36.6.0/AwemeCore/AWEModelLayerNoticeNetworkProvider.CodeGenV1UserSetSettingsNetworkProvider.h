@class NSString, NSNumber;

@interface AWEModelLayerNoticeNetworkProvider.CodeGenV1UserSetSettingsNetworkProvider : AWEDataLayerRootModelGetMethodNetworkProvider {
    void /* function */ field;
    void /* function */ userResidence;
    void /* function */ contentLanguage;
    void /* function */ contentLanguageNotLogin;
    void /* function */ settingsNotLogin;
    void /* function */ postscript;
}

@property (nonatomic, copy) NSString *field;
@property (nonatomic, retain) NSNumber *value;
@property (nonatomic, copy) NSString *userResidence;
@property (nonatomic, copy) NSString *contentLanguage;
@property (nonatomic, retain) NSNumber *actionType;
@property (nonatomic, copy) NSString *contentLanguageNotLogin;
@property (nonatomic, copy) NSString *settingsNotLogin;
@property (nonatomic, retain) NSNumber *vpaContentChoice;
@property (nonatomic, copy) NSString *postscript;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
