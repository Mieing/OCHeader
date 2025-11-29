@class NSString;

@interface FinderLiveQRCodePosterStyle : WXPBGeneratedMessage

@property (nonatomic) unsigned int styleId;
@property (nonatomic) int bgType;
@property (retain, nonatomic) NSString *bgSubType;
@property (retain, nonatomic) NSString *fgColor;
@property (retain, nonatomic) NSString *finderLogoColor;
@property (retain, nonatomic) NSString *authIconUrl;

+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnTypeForWCDB;
+ (void)initialize;

- (id)archivedWCTValue;

@end
