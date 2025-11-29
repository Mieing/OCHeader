@class NSString, FinderWxAppInfo;

@interface WCFinderLiveStarterStruct : NSObject

@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) FinderWxAppInfo *wxAppInfo;
@property (nonatomic) BOOL isPrivateAccount;

+ (id)checkToGetStruct;
+ (id)replaceCommaToSemicolon:(id)a0;

- (id)toReport;
- (void).cxx_destruct;

@end
