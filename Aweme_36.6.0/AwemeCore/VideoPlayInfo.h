@class NSString;

@interface VideoPlayInfo : NSObject

@property (copy, nonatomic) NSString *primaryUrl;
@property (copy, nonatomic) NSString *secondaryUrl;
@property (copy, nonatomic) NSString *urlKey;

- (id)initWithPrimaryUrl:(id)a0 secondaryUrl:(id)a1 urlKey:(id)a2;
- (void).cxx_destruct;

@end
