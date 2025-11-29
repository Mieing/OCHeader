@class NSString, NSMutableDictionary;

@interface IESLiveDLSubscribeEventModel : NSObject

@property (retain, nonatomic) NSMutableDictionary *params;
@property (retain, nonatomic) NSString *eventName;
@property (nonatomic) long long timeout;
@property (retain, nonatomic) NSString *scene;

- (void)setAnchorList:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
