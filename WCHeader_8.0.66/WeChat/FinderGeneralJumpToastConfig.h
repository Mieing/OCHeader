@class NSString, FinderGeneralJumpToastExtConfig, NSMutableArray;

@interface FinderGeneralJumpToastConfig : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *msg;
@property (retain, nonatomic) NSString *cancel;
@property (retain, nonatomic) NSString *confirm;
@property (retain, nonatomic) FinderGeneralJumpToastExtConfig *extConfig;
@property (retain, nonatomic) NSMutableArray *buttons;

+ (void)initialize;

@end
