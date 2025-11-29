@class UIColor, NSString, NSDictionary, AWEProfileContext, NSNumber;
@protocol AWEProfileBaseContainerProtocol;

@interface AWEProfileLynxConfiguration : NSObject

@property (nonatomic) BOOL fromHome;
@property (copy, nonatomic) NSDictionary *queryDict;
@property (copy, nonatomic) NSDictionary *globalProps;
@property (copy, nonatomic) NSString *tabName;
@property (copy, nonatomic) NSDictionary *commonTrackDict;
@property (copy, nonatomic) NSString *scheme;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSDictionary *profileNewSchemaDict;
@property (retain, nonatomic) UIColor *defaultProfileLynxBgColor;
@property (copy, nonatomic) NSString *serverMobParams;
@property (retain, nonatomic) NSNumber *tabId;
@property (copy, nonatomic) NSString *businessType;
@property (weak, nonatomic) AWEProfileContext *profileContext;
@property (weak, nonatomic) id<AWEProfileBaseContainerProtocol> profileContainer;

- (BOOL)enableLynxTabV3Optimize;
- (void).cxx_destruct;

@end
