@class NSArray, NSDictionary;

@interface TPDownloadParam : NSObject

@property (retain, nonatomic) NSArray *urlList;
@property (nonatomic) int dlType;
@property (retain, nonatomic) NSDictionary *extraInfo;

- (id)initWithUrlList:(id)a0 dlType:(int)a1 extraInfo:(id)a2;
- (id)getCdnUrls;
- (int)getClipNo;
- (int)getClipCount;
- (id)getKeyId;
- (id)getSavePath;
- (id)getVid;
- (id)getPlayDefinition;
- (BOOL)isCharge;
- (BOOL)isOffline;
- (id)getExtraJsonInfo;
- (BOOL)isAdaptivePlay;
- (void).cxx_destruct;

@end
