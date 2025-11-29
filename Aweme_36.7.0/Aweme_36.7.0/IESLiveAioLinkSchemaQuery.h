@class NSString, NSMutableArray;

@interface IESLiveAioLinkSchemaQuery : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *URL;
@property (copy, nonatomic) NSString *fallbackURL;
@property (copy, nonatomic) NSString *page;
@property (copy, nonatomic) NSString *sourceScene;
@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (nonatomic) long long rateHeight;
@property (nonatomic) long long widthPercent;
@property (nonatomic) long long heightPercent;
@property (nonatomic) BOOL showMask;
@property (nonatomic) BOOL maskAlpha;
@property (nonatomic) BOOL maskClickDisable;
@property (nonatomic) BOOL pullDownClose;
@property (nonatomic) BOOL openAnimate;
@property (nonatomic) BOOL addSafeAreaHeight;
@property (retain, nonatomic) NSMutableArray *settingsKeysArray;
@property (readonly, nonatomic) unsigned long long settingsKeysArray_Count;

+ (id)descriptor;

@end
