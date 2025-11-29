@class NSString, NSDictionary;

@interface W1wPersonalMsgJumpInfo : NSObject

@property (nonatomic) int isTransparent;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *page;
@property (retain, nonatomic) NSDictionary *query;
@property (retain, nonatomic) NSString *minVersion;

+ (id)jumpInfoWithLiteAppType:(unsigned long long)a0 query:(id)a1;

- (id)description;
- (void).cxx_destruct;

@end
