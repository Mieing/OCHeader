@class NSDictionary, NSString;
@protocol AWEAwemeDetailBottomBarCommonContextProtocol;

@interface AWEPoiEmphraseCollectViewBarContext : NSObject <AWEFeedPOIEmphraseCollectViewBarContextProtocol>

@property (retain, nonatomic) id<AWEAwemeDetailBottomBarCommonContextProtocol> commonCtx;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (copy, nonatomic) id /* block */ assignLogExtraDictBlock;
@property (copy, nonatomic) id /* block */ fetchCurrentAwemeListBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
