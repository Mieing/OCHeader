@class NSMutableArray, AVPlayerItem;

@interface IESLiveSoloKTVTemplateSwitchModel : NSObject

@property (nonatomic) int sdkVersion;
@property (nonatomic) int count;
@property (nonatomic) int offset;
@property (retain, nonatomic) NSMutableArray *items;
@property (retain, nonatomic) AVPlayerItem *backgroundItem;

- (void)clearItem;
- (void)clearAllItem;
- (void)sortTemplate;
- (void)parseTemplateJson:(id)a0 isAppend:(BOOL)a1;
- (void)enlargeFont;
- (void).cxx_destruct;
- (id)init;
- (void)downloadFont:(id)a0;

@end
