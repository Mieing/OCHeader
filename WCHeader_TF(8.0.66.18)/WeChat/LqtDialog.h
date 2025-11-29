@class NSString, LqtDialogBtn;

@interface LqtDialog : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *wording;
@property (nonatomic) unsigned int style;
@property (retain, nonatomic) LqtDialogBtn *centerBtn;
@property (retain, nonatomic) LqtDialogBtn *leftBtn;
@property (retain, nonatomic) LqtDialogBtn *rightBtn;

+ (void)initialize;

@end
