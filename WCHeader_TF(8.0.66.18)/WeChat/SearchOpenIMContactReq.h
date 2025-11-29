@class NSString, SearchContactContext, OpenIMFinderInfo, NSData;

@interface SearchOpenIMContactReq : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *tpQrcode;
@property (retain, nonatomic) NSString *mobile;
@property (nonatomic) unsigned int tpType;
@property (retain, nonatomic) NSString *tpMultiUserQrcode;
@property (retain, nonatomic) OpenIMFinderInfo *openimFinderInfo;
@property (retain, nonatomic) NSString *url;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSData *spamContext;
@property (retain, nonatomic) SearchContactContext *searchContactContext;

+ (void)initialize;

@end
