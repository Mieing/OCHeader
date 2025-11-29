@class NSString, NSDictionary;

@interface TPUrlDataSource : NSObject

@property (retain, nonatomic) NSString *originUrl;
@property (retain, nonatomic) NSString *thumbPlayerUrl;
@property (retain, nonatomic) NSString *systemPlayerUrl;
@property (retain, nonatomic) NSDictionary *httpHeader;
@property (nonatomic) int playId;

- (id)initWithOriginUrl:(id)a0 thumbPlayerUrl:(id)a1 systemPlayerUrl:(id)a2 httpHeader:(id)a3;
- (BOOL)isValid;
- (void).cxx_destruct;

@end
