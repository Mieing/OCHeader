@class NSString;

@interface MMTheme : NSObject <MCssParserDelegate> {
    BOOL m_isAlreadyParsed;
    BOOL m_isParseOK;
}

@property (retain, nonatomic) NSString *tid;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *icon;
@property (retain, nonatomic) NSString *version;
@property (retain, nonatomic) NSString *author;
@property (retain, nonatomic) NSString *discription;
@property (retain, nonatomic) NSString *website;
@property (retain, nonatomic) NSString *basePath;
@property (nonatomic) long long totalSize;
@property (nonatomic) long long finishedSize;
@property (nonatomic) long long themeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)themeFromPath:(id)a0;
+ (id)defaultTheme;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)keyPaths;
- (id)initWithBasePath:(id)a0;
- (void)onScriptFunctionWithSelectors:(id)a0 withStatements:(id)a1;
- (void)onReceiveCssRulesetWithSelectors:(id)a0 withDeclarations:(id)a1;
- (void)onParseErrorInFile:(id)a0 onLineNumber:(id)a1 withText:(id)a2 withErrorMessage:(id)a3;
- (id)onNextCssFile;
- (void)onCssParseStart;
- (void)onCssParseEnd;
- (BOOL)startParse;
- (BOOL)isDefaultTheme;
- (void)setAsDefaultTheme;
- (id)pathForResource:(id)a0;
- (id)pathForLocalizedResource:(id)a0;
- (void).cxx_destruct;

@end
