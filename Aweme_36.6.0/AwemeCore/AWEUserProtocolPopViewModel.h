@class NSString, NSArray, NSDictionary;

@interface AWEUserProtocolPopViewModel : NSObject

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSArray *linkArray;
@property (copy, nonatomic) NSArray *urlArray;
@property (copy, nonatomic) NSDictionary *trackInfo;
@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSArray *shouldShowNavBarLinks;
@property (copy, nonatomic) NSString *title;

+ (id)createDefaultModel;
+ (Class)aAWEUserModuleAgreementInfoCommonAdapterClass;

- (id)aAWEUserModuleAgreementInfoCommonAdapter;
- (void).cxx_destruct;

@end
