@class NSString, FinderPresentHalfSheetInfo_IconInfo;

@interface FinderPresentHalfSheetInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *dedupKey;
@property (retain, nonatomic) FinderPresentHalfSheetInfo_IconInfo *iconInfo;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) NSString *buttonWording;

+ (void)initialize;

@end
