@class NSString;

@interface HbEnvelopSourceLocal : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *corpLogo;
@property (retain, nonatomic) NSString *bubbleImage;
@property (retain, nonatomic) NSString *coverImage;
@property (retain, nonatomic) NSString *detailImage;
@property (retain, nonatomic) NSString *bubbleImageMd5;
@property (retain, nonatomic) NSString *coverImageMd5;
@property (retain, nonatomic) NSString *detailImageMd5;
@property (retain, nonatomic) NSString *corpLogoMd5;
@property (retain, nonatomic) NSString *coverWidgetImage;
@property (retain, nonatomic) NSString *coverWidgetImageMd5;
@property (retain, nonatomic) NSString *senderC2CWidgetImage;
@property (retain, nonatomic) NSString *senderC2CWidgetImageMd5;
@property (retain, nonatomic) NSString *receiverC2CWidgetImage;
@property (retain, nonatomic) NSString *receiverC2CWidgetImageMd5;
@property (nonatomic) unsigned int statusFlag;
@property (retain, nonatomic) NSString *corpLogoDynamic;
@property (retain, nonatomic) NSString *bubbleImageDynamic;
@property (retain, nonatomic) NSString *coverImageDynamic;
@property (retain, nonatomic) NSString *detailImageDynamic;
@property (retain, nonatomic) NSString *corpLogoDynamicMd5;
@property (retain, nonatomic) NSString *bubbleImageDynamicMd5;
@property (retain, nonatomic) NSString *coverImageDynamicMd5;
@property (retain, nonatomic) NSString *detailImageDynamicMd5;
@property (nonatomic) unsigned int coverImageDynamicType;
@property (retain, nonatomic) NSString *bubbleAtmospherePagUrl;
@property (retain, nonatomic) NSString *coverAtmospherePagUrl;
@property (retain, nonatomic) NSString *detailAtmospherePagUrl;

+ (void)initialize;

@end
