@class NSString;

@interface GeneralFastLoadPageDataRequestUrlInfo : NSObject

@property (copy, nonatomic) NSString *url;
@property (nonatomic) unsigned int preloadType;
@property (nonatomic) unsigned int openScene;
@property (nonatomic) unsigned int itemShowType;

+ (id)generateRequestUrlInfoIfSupport:(BOOL)a0 itemShowType:(unsigned int)a1 url:(id)a2 openScene:(unsigned int)a3 preloadType:(unsigned int)a4;

- (void).cxx_destruct;

@end
