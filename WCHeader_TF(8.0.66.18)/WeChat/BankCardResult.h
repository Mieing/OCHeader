@class OcrItem;

@interface BankCardResult : WXPBGeneratedMessage

@property (nonatomic) unsigned int type;
@property (retain, nonatomic) OcrItem *number;
@property (retain, nonatomic) OcrItem *validDate;
@property (retain, nonatomic) OcrItem *bankName;
@property (retain, nonatomic) OcrItem *cardPosition;
@property (nonatomic) unsigned int imageWidth;
@property (nonatomic) unsigned int imageHeight;
@property (nonatomic) unsigned int seqNum;

+ (void)initialize;

@end
