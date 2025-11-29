@class NSString, NSMutableDictionary, NSURL, NSData;

@interface CRRequestBuilder : NSObject

@property (retain, nonatomic) NSMutableDictionary *headers;
@property (copy, nonatomic) NSString *method;
@property (retain, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *password;
@property (copy, nonatomic) NSData *body;
@property (nonatomic) BOOL compressBody;

- (id)init;
- (void)setValue:(id)a0 forHeader:(id)a1;
- (void).cxx_destruct;

@end
