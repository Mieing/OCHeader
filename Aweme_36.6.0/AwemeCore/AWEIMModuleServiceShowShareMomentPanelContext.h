@class NSString, NSDictionary, AWEAwemeModel;

@interface AWEIMModuleServiceShowShareMomentPanelContext : AWEIMModuleServiceShowSharePanelBaseContext <AWEIMModuleServiceShowShareMomentPanelContextProtocol>

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (nonatomic) unsigned long long contentType;
@property (copy, nonatomic) NSString *momentType;
@property (copy, nonatomic) NSDictionary *extraLogDict;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
