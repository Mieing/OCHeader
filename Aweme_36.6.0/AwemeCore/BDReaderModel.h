@class BDReaderConfig, NSString, BDReaderBookInfo, BDReaderOpenParameters;
@protocol BDReaderDataSource, BDReaderDelegate, BDReaderSelection, BDReaderUIDataSource, BDReaderUIDelegate, BDReaderEpubParser, BDReaderActionDelegate, BDReaderCache, BDReaderParser;

@interface BDReaderModel : NSObject

@property (readonly, nonatomic) BOOL autoParser;
@property (weak, nonatomic) id<BDReaderActionDelegate> privateActionDelegate;
@property (retain, nonatomic) NSString *bookId;
@property (retain, nonatomic) BDReaderBookInfo *bookInfo;
@property (retain, nonatomic) BDReaderOpenParameters *firstOpenParameters;
@property (retain, nonatomic) BDReaderConfig *config;
@property (weak, nonatomic) id<BDReaderDataSource> dataSource;
@property (weak, nonatomic) id<BDReaderDelegate> delegate;
@property (nonatomic) unsigned long long composerType;
@property (nonatomic) unsigned long long bookFormat;
@property (copy, nonatomic) NSString *bookFilePath;
@property (readonly, weak, nonatomic) id<BDReaderActionDelegate> actionDelegate;
@property (retain, nonatomic) id<BDReaderParser> txtParser;
@property (retain, nonatomic) id<BDReaderEpubParser> epubParser;
@property (retain, nonatomic) id<BDReaderCache> cache;
@property (retain, nonatomic) id<BDReaderSelection> selection;
@property (nonatomic) BOOL preCacheDisable;
@property (nonatomic) BOOL debugModeEnable;
@property (nonatomic) BOOL logCollectEnable;
@property (nonatomic) BOOL horizontalScreenEnable;
@property (nonatomic) BOOL contentDragEnable;
@property (nonatomic) BOOL disableDefaultCSSStyle;
@property (nonatomic) BOOL enableAllOrientation;
@property (nonatomic) BOOL disableAutorotate;
@property (weak, nonatomic) id<BDReaderUIDataSource> UIDataSource;
@property (weak, nonatomic) id<BDReaderUIDelegate> UIDelegate;

- (id)createReaderViewController;
- (void).cxx_destruct;

@end
