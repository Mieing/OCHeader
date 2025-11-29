@class NSString, NSDictionary;

@interface AWEBatManModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSString *awemeId;
@property (retain, nonatomic) NSString *autherId;
@property (retain, nonatomic) NSString *batManId;
@property (retain, nonatomic) NSString *batManName;
@property (retain, nonatomic) NSString *iconURL;
@property (retain, nonatomic) NSString *buttonMapURL;
@property (retain, nonatomic) NSString *downloadURL;
@property (nonatomic) int orientationType;
@property (nonatomic) BOOL shouldSaveProgress;
@property (nonatomic) BOOL isShared;
@property (retain, nonatomic) NSString *rawInfo;
@property (retain, nonatomic) NSString *topicId;
@property (nonatomic) long long leastVersion;
@property (copy, nonatomic) NSDictionary *extra;
@property (retain, nonatomic) NSString *videoEnterFrom;
@property (copy, nonatomic) NSString *core;
@property (copy, nonatomic) NSString *gameDesc;
@property (copy, nonatomic) NSString *brandChannel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAweme:(id)a0;
- (void).cxx_destruct;

@end
