@class NSString;

@interface WCRedEnvelopesReceiveHomeTemplateItem : NSObject

@property (retain, nonatomic) NSString *corpName;
@property (retain, nonatomic) NSString *skinUrl;
@property (nonatomic) unsigned int skinLocalId;
@property (retain, nonatomic) NSString *skinImageMd5;
@property (nonatomic) BOOL isTempSkin;
@property (retain, nonatomic) NSString *skinWidgetUrl;
@property (retain, nonatomic) NSString *skinWidgetMd5;
@property (retain, nonatomic) NSString *skinPagUrl;
@property (retain, nonatomic) NSString *skinPagMd5;
@property (nonatomic) int pagType;
@property (retain, nonatomic) NSString *atmospherePagUrl;

- (void).cxx_destruct;

@end
