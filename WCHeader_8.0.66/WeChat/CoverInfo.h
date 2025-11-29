@class NSString, NSMutableArray, QRButtonInfo;

@interface CoverInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *wording;
@property (retain, nonatomic) QRButtonInfo *firstButton;
@property (retain, nonatomic) QRButtonInfo *secondButton;
@property (nonatomic) unsigned int buttonMode;
@property (retain, nonatomic) NSMutableArray *applyDesc;

+ (void)initialize;

@end
