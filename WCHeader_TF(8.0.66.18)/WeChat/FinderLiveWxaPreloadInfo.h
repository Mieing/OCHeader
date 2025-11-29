@class NSString, NSMutableArray;

@interface FinderLiveWxaPreloadInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *prerenderPath;
@property (retain, nonatomic) NSMutableArray *ctrlInfos;

+ (void)initialize;

- (void)setCtrlInfos:(id)a0;
- (id)ctrlInfos;
- (void)setPrerenderPath:(id)a0;
- (id)prerenderPath;

@end
