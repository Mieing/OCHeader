@class NSString, NSDictionary, UIImage, NSArray, FinderLiveNoticeQRCodeResponse_PersonalColumnInfo;

@interface MMFinderLiveNoticePosterModel : NSObject

@property (retain, nonatomic) NSDictionary *styledQrCodes;
@property (retain, nonatomic) UIImage *fallbackQrCode;
@property (retain, nonatomic) NSString *qrCodeContent;
@property (retain, nonatomic) NSString *backgroundImageUri;
@property (nonatomic) unsigned int backgroundImageChangeDisablementFlag;
@property (retain, nonatomic) NSArray *styles;
@property (nonatomic) BOOL invalidateStyles;
@property (retain, nonatomic) NSString *selectedStyleId;
@property (retain, nonatomic) FinderLiveNoticeQRCodeResponse_PersonalColumnInfo *columnInfo;
@property (nonatomic) int modifyEntranceStatus;
@property (nonatomic) BOOL enableDescExtend;
@property (nonatomic) BOOL disableShare;
@property (retain, nonatomic) NSString *shareDisableWording;

- (id)initWithNoticeQrCodeResponse:(id)a0;
- (id)initWithGenericLiveQrCodeResponse:(id)a0;
- (id)initWithPreviewModel:(id)a0;
- (unsigned long long)qrCodeEcLevelForContent:(id)a0;
- (void).cxx_destruct;

@end
