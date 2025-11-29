@class SKBuiltinBuffer_t;

@interface GetPersonalDesignerRequest : WXPBGeneratedMessage

@property (nonatomic) unsigned int designerUin;
@property (retain, nonatomic) SKBuiltinBuffer_t *reqBuf;
@property (nonatomic) unsigned int scene;
@property (nonatomic) BOOL needUgcemoji;
@property (nonatomic) BOOL emotionNeedExposeThumb;
@property (nonatomic) BOOL needGetStatisticsInfo;

+ (void)initialize;

@end
