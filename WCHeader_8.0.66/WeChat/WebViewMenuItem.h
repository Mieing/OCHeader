@class NSString, UIImage;

@interface WebViewMenuItem : NSObject

@property (retain, nonatomic) NSString *itemID;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) UIImage *iconImage;
@property (retain, nonatomic) NSString *key;

- (id)init;
- (void)setTitleWithID:(id)a0;
- (void).cxx_destruct;

@end
