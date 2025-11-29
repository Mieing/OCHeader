@class NSString, NLEModel_OC;

@interface ACCRepoMemoriesModel : NSObject <ACCRepoRegister, ACCRepoMemoriesData>

@property (nonatomic) BOOL validMemories;
@property (retain, nonatomic) NLEModel_OC *memoriesNLEModel;
@property (copy, nonatomic) NSString *themeId;
@property (copy, nonatomic) NSString *mainStickerTitle;
@property (nonatomic) double mainStickerOffsetY;
@property (nonatomic) double mainStickerFontSize;
@property (copy, nonatomic) NSString *subStickerTitle;
@property (nonatomic) double subStickerOffsetY;
@property (nonatomic) double subStickerFontSize;
@property (nonatomic) BOOL isEnterEditSecondaryPage;
@property (nonatomic) BOOL hasEdited;
@property (copy, nonatomic) NSString *trackThemeTag;
@property (copy, nonatomic) NSString *trackTitle;
@property (copy, nonatomic) NSString *themeEditEnterMethod;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)repo_dataProtocol;

@end
