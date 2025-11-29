@class NSString;

@interface MMLiveCDNPlayerIllegalItemInfo : NSObject

@property (copy, nonatomic) NSString *itemId;
@property (copy, nonatomic) NSString *url;
@property (nonatomic) long long currentScene;
@property (nonatomic) long long lastScene;
@property (nonatomic) long long commentScene;
@property (copy, nonatomic) NSString *streamId;
@property (copy, nonatomic) NSString *itemPtr;

- (id)initWithItemId:(id)a0 url:(id)a1 currentScene:(long long)a2 lastScene:(long long)a3 commentScene:(long long)a4 streamId:(id)a5 itemPtr:(id)a6;
- (id)toDictionary;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
