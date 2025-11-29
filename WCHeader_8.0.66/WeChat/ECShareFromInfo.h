@class NSString, NSMutableArray;

@interface ECShareFromInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *lastGmsgId;
@property (nonatomic) int infoType;
@property (nonatomic) unsigned long long finderObjectId;
@property (retain, nonatomic) NSString *mpArticleUrl;
@property (retain, nonatomic) NSString *finderExportId;
@property (nonatomic) unsigned long long productId;
@property (retain, nonatomic) NSMutableArray *ecsJumpInfoBase64List;

+ (void)initialize;

- (void)setEcsJumpInfoBase64List:(id)a0;
- (id)ecsJumpInfoBase64List;
- (void)setProductId:(unsigned long long)a0;
- (unsigned long long)productId;
- (void)setFinderExportId:(id)a0;
- (id)finderExportId;
- (void)setMpArticleUrl:(id)a0;
- (id)mpArticleUrl;
- (void)setFinderObjectId:(unsigned long long)a0;
- (unsigned long long)finderObjectId;
- (void)setInfoType:(int)a0;
- (int)infoType;
- (void)setLastGmsgId:(id)a0;
- (id)lastGmsgId;

@end
