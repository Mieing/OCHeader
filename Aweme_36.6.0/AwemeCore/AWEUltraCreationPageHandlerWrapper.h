@class AWEUltraCreationPageHandler, NSString;

@interface AWEUltraCreationPageHandlerWrapper : NSObject <NSCopying>

@property (retain, nonatomic) AWEUltraCreationPageHandler *handler;
@property (copy, nonatomic) NSString *requestId;
@property (readonly, nonatomic) long long curPage;

- (id)initWithConfig:(id)a0 finishResultCallback:(id /* block */)a1;
- (void)configInitialToken:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
