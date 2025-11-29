@class NSString;

@interface WCCanvasComponentReportUrlInfo : MMObject

@property (retain, nonatomic) NSString *urlMd5;
@property (nonatomic) unsigned int needDownload;

+ (id)infoWithUrlString:(id)a0 needDownload:(BOOL)a1;

- (id)dictionaryRepresentation;
- (void).cxx_destruct;

@end
