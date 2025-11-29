@interface CameraScanCombineReportActionBaseInfo : NSObject

@property (nonatomic) unsigned int enterScene;
@property (nonatomic) unsigned long long enterTabTs;
@property (nonatomic) unsigned long long actionTs;
@property (nonatomic) unsigned int pageSessionId;
@property (nonatomic) unsigned int tabSessionId;
@property (nonatomic) unsigned int scanSessionId;

@end
