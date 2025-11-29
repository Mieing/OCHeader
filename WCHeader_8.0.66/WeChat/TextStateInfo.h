@class NSString, NSMutableArray;

@interface TextStateInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *sourceName;
@property (retain, nonatomic) NSString *sourceIconUrl;
@property (retain, nonatomic) NSString *iconId;
@property (retain, nonatomic) NSString *image;
@property (retain, nonatomic) NSString *desc;
@property (nonatomic) BOOL hideToast;
@property (retain, nonatomic) NSMutableArray *jumps;
@property (retain, nonatomic) NSString *businessFooterVerifyInfoBase64;

+ (void)initialize;

@end
