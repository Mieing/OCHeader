@class NSString, NSMutableArray;

@interface HintOfKeyboard : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *bankType;
@property (nonatomic) unsigned int hitType;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSMutableArray *recommList;

+ (void)initialize;

@end
