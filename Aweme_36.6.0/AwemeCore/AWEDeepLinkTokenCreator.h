@class NSString, NSDictionary;

@interface AWEDeepLinkTokenCreator : NSObject <AWEDeepLinkTokenCreatorProtocol>

@property (copy, nonatomic) NSString *urlString;
@property (copy, nonatomic) NSString *tokenkey;
@property (copy, nonatomic) NSDictionary *pathParams;
@property (copy, nonatomic) NSDictionary *queryParams;
@property (nonatomic) unsigned long long dpPageType;
@property (nonatomic) unsigned long long requireLoginType;
@property (nonatomic) BOOL skipURLTransfer;
@property (nonatomic) BOOL resetToRoot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
