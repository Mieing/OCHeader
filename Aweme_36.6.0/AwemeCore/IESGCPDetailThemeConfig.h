@class NSString, IESGCPHeaderTheme, IESGCPPBGameDetailCommonStyleInfo;

@interface IESGCPDetailThemeConfig : NSObject

@property (retain, nonatomic) IESGCPPBGameDetailCommonStyleInfo *styleInfo;
@property (nonatomic) BOOL isV3StructureConfig;
@property (nonatomic) BOOL isV4StructureConfig;
@property (nonatomic) BOOL detailTopUseColV4;
@property (nonatomic) BOOL useNewHeaderTransactionAnimation;
@property (nonatomic) BOOL isNewHeaderSection;
@property (retain, nonatomic) NSString *gameIconURL;
@property (readonly, nonatomic) BOOL useNewHeaderStyle;
@property (retain, nonatomic) IESGCPHeaderTheme *headerTheme;
@property (retain, nonatomic) IESGCPHeaderTheme *halfScreenHeaderTheme;
@property (readonly, nonatomic) double conversionButtonCornerRadius;

- (id)headerThemeWithHeaderInfo:(id)a0;
- (id)initWithCommonStyleInfo:(id)a0 isV3StructureConfig:(BOOL)a1 gameIconURL:(id)a2;
- (void).cxx_destruct;
- (void)setupConfig;

@end
