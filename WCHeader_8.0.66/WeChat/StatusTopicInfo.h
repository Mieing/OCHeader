@class NSString, NSData, StatusClusterPresent, NSMutableArray, StatusFooter;

@interface StatusTopicInfo : WXPBGeneratedMessage <YYModel>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *topicId;
@property (retain, nonatomic) NSString *sourceId;
@property (retain, nonatomic) NSString *sourceActivityId;
@property (retain, nonatomic) NSString *sourceName;
@property (retain, nonatomic) NSString *sourceIcon;
@property (retain, nonatomic) NSString *iconId;
@property (retain, nonatomic) NSMutableArray *topics;
@property (retain, nonatomic) NSData *clusterShowInfo;
@property (retain, nonatomic) NSMutableArray *jumpInfos;
@property (retain, nonatomic) NSString *footerVerifyInfo;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSMutableArray *sourceJumpInfos;
@property (retain, nonatomic) NSMutableArray *iconActions;
@property (retain, nonatomic) NSMutableArray *jumpElements;
@property (retain, nonatomic) NSString *mpSignature;
@property (retain, nonatomic) StatusFooter *footer;
@property (retain, nonatomic) NSString *clusterIdDeprecated;
@property (retain, nonatomic) StatusClusterPresent *clusterPresentDeprecated;
@property (retain, nonatomic) NSData *deprecatedBuffer;
@property (nonatomic) unsigned int characterSetType;
@property (retain, nonatomic) NSMutableArray *clusterPresents;
@property (retain, nonatomic) NSString *locale;

+ (id)modelPropertyBlacklistForConfigTag:(id)a0;
+ (void)initialize;


@end
