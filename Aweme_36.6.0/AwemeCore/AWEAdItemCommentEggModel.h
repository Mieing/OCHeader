@class NSString, NSMutableDictionary, AWEURLModel;
@protocol AWEAdPreloadComponentContext;

@interface AWEAdItemCommentEggModel : MTLModel <MTLJSONSerializing, AWEAdEggModelProtocol>

@property (copy, nonatomic) NSString *sourceURL;
@property (copy, nonatomic) NSString *sourceType;
@property (retain, nonatomic) AWEURLModel *sourceURLList;
@property (copy, nonatomic) NSString *openURL;
@property (copy, nonatomic) NSString *webURL;
@property (copy, nonatomic) NSString *regex;
@property (copy, nonatomic) NSString *ID;
@property (copy, nonatomic) NSString *complianceData;
@property (nonatomic) BOOL isDownloadCompleted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *webTitle;
@property (nonatomic) BOOL isH5;
@property (nonatomic) BOOL isLynx;
@property (copy, nonatomic) NSString *lynxURL;
@property (retain, nonatomic) NSMutableDictionary *componentStages;
@property (weak, nonatomic) id<AWEAdPreloadComponentContext> componentContext;

+ (id)JSONKeyPathsByPropertyKey;
+ (unsigned long long)storageBehaviorForPropertyWithKey:(id)a0;

- (id)componentRefer;
- (id)componentCreativeID;
- (id)componentLogExtra;
- (id)componentGroupID;
- (id)componentExtraID;
- (void).cxx_destruct;
- (id)init;
- (id)componentType;

@end
