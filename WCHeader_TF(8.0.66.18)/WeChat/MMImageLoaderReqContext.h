@class MMHevcHelper, NSURL, NSMutableDictionary;

@interface MMImageLoaderReqContext : NSObject

@property (retain, nonatomic) MMHevcHelper *hevcHelper;
@property (nonatomic) unsigned int imgType;
@property (retain, nonatomic) NSURL *imgUrl;
@property (nonatomic) unsigned long long fromType;
@property (nonatomic) unsigned int hevcIdKeyID;
@property (nonatomic) unsigned int hevcKvStatId;
@property (nonatomic) BOOL isRetry;
@property (retain, nonatomic) NSMutableDictionary *extraInfo;
@property (nonatomic) BOOL isDownLoadHevc;
@property (nonatomic) BOOL isReqHevc;
@property (nonatomic) BOOL isPreload;
@property (readonly, nonatomic) BOOL isOpenBlankMonitor;
@property (readonly, nonatomic) unsigned int posInTL;

- (id)initWithImgType:(unsigned int)a0 imgUrl:(id)a1 fromType:(unsigned long long)a2 hevcIdKeyID:(unsigned int)a3 hevcKvStatId:(unsigned int)a4 posInTL:(unsigned int)a5 isOpenBlankMonitor:(BOOL)a6;
- (void).cxx_destruct;

@end
