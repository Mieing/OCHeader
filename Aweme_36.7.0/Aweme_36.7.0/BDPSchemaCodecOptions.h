@class NSString, NSError, NSMutableDictionary;

@interface BDPSchemaCodecOptions : NSObject

@property (copy, nonatomic) NSString *schemaVersion;
@property (copy, nonatomic) NSString *fullStartPage;
@property (copy, nonatomic) NSString *fullquery;
@property (copy, nonatomic) NSString *uniqID;
@property (copy, nonatomic) NSError *error;
@property (copy, nonatomic) NSString *protocol;
@property (copy, nonatomic) NSString *host;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *versionType;
@property (copy, nonatomic) NSString *token;
@property (retain, nonatomic) NSMutableDictionary *meta;
@property (copy, nonatomic) NSString *scene;
@property (retain, nonatomic) NSMutableDictionary *bdpLog;
@property (copy, nonatomic) NSString *path;
@property (retain, nonatomic) NSMutableDictionary *query;
@property (nonatomic) BOOL forceColdBoot;
@property (copy, nonatomic) NSString *launchMode;
@property (copy, nonatomic) NSString *toolbarStyle;
@property (retain, nonatomic) NSMutableDictionary *inspect;
@property (nonatomic) long long animationType;
@property (retain, nonatomic) NSMutableDictionary *customFields;
@property (copy, nonatomic) NSString *appRenderType;
@property (retain, nonatomic) NSMutableDictionary *refererInfoDictionary;

- (BOOL)isEqualToOption:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
