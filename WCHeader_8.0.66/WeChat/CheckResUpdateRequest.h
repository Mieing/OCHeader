@class NSData, NSMutableArray;

@interface CheckResUpdateRequest : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *resId;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSData *context;
@property (nonatomic) unsigned int flag;

+ (void)initialize;

- (void)setFlag:(unsigned int)a0;
- (unsigned int)flag;
- (void)setContext:(id)a0;
- (id)context;
- (void)setScene:(unsigned int)a0;
- (unsigned int)scene;
- (void)setResId:(id)a0;
- (id)resId;

@end
