@class NSString, NSMutableArray;

@interface CheckTmplVerResp_TmplInfo : WXPBGeneratedMessage

@property (nonatomic) int type;
@property (nonatomic) unsigned int version;
@property (retain, nonatomic) NSString *cdnUrl;
@property (retain, nonatomic) NSString *md5;
@property (nonatomic) unsigned int versionLowerBound;
@property (nonatomic) unsigned int reportId;
@property (retain, nonatomic) NSMutableArray *httpHeaderList;
@property (nonatomic) BOOL needGetA8Key;
@property (retain, nonatomic) NSString *fullVersion;
@property (retain, nonatomic) NSMutableArray *versionControlList;
@property (retain, nonatomic) NSString *versionGroup;

+ (void)initialize;

- (void)setVersionGroup:(id)a0;
- (id)versionGroup;
- (void)setVersionControlList:(id)a0;
- (id)versionControlList;
- (void)setFullVersion:(id)a0;
- (id)fullVersion;
- (void)setNeedGetA8Key:(BOOL)a0;
- (BOOL)needGetA8Key;
- (void)setHttpHeaderList:(id)a0;
- (id)httpHeaderList;
- (void)setReportId:(unsigned int)a0;
- (unsigned int)reportId;
- (void)setVersionLowerBound:(unsigned int)a0;
- (unsigned int)versionLowerBound;
- (void)setMd5:(id)a0;
- (id)md5;
- (void)setCdnUrl:(id)a0;
- (id)cdnUrl;
- (void)setVersion:(unsigned int)a0;
- (unsigned int)version;
- (void)setType:(int)a0;
- (int)type;

@end
