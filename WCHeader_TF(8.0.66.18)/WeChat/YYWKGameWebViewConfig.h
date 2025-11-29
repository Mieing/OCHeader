@class NSString;

@interface YYWKGameWebViewConfig : NSObject

@property (nonatomic) BOOL useUrlSchemeHandler;
@property (nonatomic) BOOL useLoadHtmlString;
@property (retain, nonatomic) NSString *customScript;

- (id)toDictDesc;
- (void).cxx_destruct;

@end
