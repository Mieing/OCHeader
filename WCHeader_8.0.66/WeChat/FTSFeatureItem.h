@class NSString;

@interface FTSFeatureItem : NSObject <WeChat.FTSRowModel>

@property (nonatomic, readonly) NSString *userName;
@property (nonatomic) unsigned int featureID;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *candidateTitle;
@property (retain, nonatomic) NSString *secoundCandidateTitle;
@property (retain, nonatomic) NSString *thirdCandidateTitle;
@property (retain, nonatomic) NSString *titlePY;
@property (retain, nonatomic) NSString *titleShortPY;
@property (retain, nonatomic) NSString *tag;
@property (retain, nonatomic) NSString *actionType;
@property (retain, nonatomic) NSString *actionUrl;
@property (retain, nonatomic) NSString *helpUrl;
@property (retain, nonatomic) NSString *updateUrl;
@property (nonatomic) long long pluginType;

- (id)diffIdentifier;
- (id)init;
- (BOOL)shouldJumpWeb;
- (BOOL)shouldJumpNative;
- (BOOL)shouldJumpWeApp;
- (void).cxx_destruct;

@end
