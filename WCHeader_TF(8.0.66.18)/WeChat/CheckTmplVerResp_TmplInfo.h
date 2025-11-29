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

@end
