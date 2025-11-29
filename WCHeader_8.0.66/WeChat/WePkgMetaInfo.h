@class NSString, NSMutableArray;

@interface WePkgMetaInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *fileIndexList;
@property (retain, nonatomic) NSString *charset;
@property (retain, nonatomic) NSString *desc;

+ (void)initialize;

- (void)setDesc:(id)a0;
- (id)desc;
- (void)setCharset:(id)a0;
- (id)charset;
- (void)setFileIndexList:(id)a0;
- (id)fileIndexList;

@end
