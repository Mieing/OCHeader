@interface RTVVoipStickerOperationReplyContent : JSONModel

@property (nonatomic) long long failReason;
@property (nonatomic) BOOL stickerNeedDownload;
@property (nonatomic) BOOL checkPanelResult;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (id)initWithFailReason:(long long)a0;

@end
