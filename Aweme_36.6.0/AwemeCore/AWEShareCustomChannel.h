@class NSString, UIImage, NSDictionary;

@interface AWEShareCustomChannel : AWEShareBaseChannel {
    NSString *_shareType;
    long long _shareCategory;
}

@property (copy, nonatomic) NSString *shareTitle;
@property (retain, nonatomic) UIImage *shareImage;
@property (copy, nonatomic) NSDictionary *shareImages;
@property (copy, nonatomic) id /* block */ shareImageProvider;
@property (copy, nonatomic) id /* block */ itemEventsHandler;
@property (copy, nonatomic) id /* block */ shareHandler;
@property (copy, nonatomic) id /* block */ asyncShareHandler;
@property (copy, nonatomic) id /* block */ preparationHandler;
@property (copy, nonatomic) id /* block */ asyncPreparationHandler;

- (void)shareWithCompletion:(id /* block */)a0;
- (long long)shareCategory;
- (id)makeItemWithStyle:(unsigned long long)a0 inView:(id)a1;
- (BOOL)prepareToShare;
- (void)prepareToShareWithCompletion:(id /* block */)a0;
- (id)initWithType:(id)a0 category:(long long)a1;
- (void).cxx_destruct;
- (id)initWithType:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)shareType;

@end
