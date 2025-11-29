@class NSString;

@interface WCPayDynamicActionEntry : NSObject

@property (retain, nonatomic) NSString *dialogId;
@property (retain, nonatomic) NSString *wording;
@property (retain, nonatomic) NSString *color;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSString *nativeUrl;
@property (retain, nonatomic) NSString *webUrl;
@property (retain, nonatomic) NSString *tinyAppUsername;
@property (retain, nonatomic) NSString *tinyAppPath;
@property (nonatomic) int entrance_type;

+ (id)genFromDict:(id)a0;

- (void).cxx_destruct;

@end
