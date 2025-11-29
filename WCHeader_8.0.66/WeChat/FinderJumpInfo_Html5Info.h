@class NSString;

@interface FinderJumpInfo_Html5Info : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *url;
@property (nonatomic) unsigned int style;
@property (nonatomic) unsigned int heightPercent;
@property (retain, nonatomic) NSString *webviewExtInfo;
@property (retain, nonatomic) NSString *transitCommonUxInfo;

+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnTypeForWCDB;
+ (void)initialize;

- (void)setTransitCommonUxInfo:(id)a0;
- (id)transitCommonUxInfo;
- (void)setWebviewExtInfo:(id)a0;
- (id)webviewExtInfo;
- (void)setHeightPercent:(unsigned int)a0;
- (unsigned int)heightPercent;
- (void)setStyle:(unsigned int)a0;
- (unsigned int)style;
- (void)setUrl:(id)a0;
- (id)url;
- (id)archivedWCTValue;
- (BOOL)isEqual:(id)a0;

@end
