@class NSString;

@interface FinderLiveGiftCustomInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int flag;
@property (retain, nonatomic) NSString *colorText;
@property (retain, nonatomic) NSString *decalText;
@property (retain, nonatomic) NSString *previewPagUrl;
@property (retain, nonatomic) NSString *previewPagMd5;
@property (retain, nonatomic) NSString *landscapePreviewPagUrl;
@property (retain, nonatomic) NSString *landscapePreviewPagMd5;

+ (void)initialize;

- (BOOL)colorCustomizable;
- (BOOL)textCustomizable;

@end
