@class NSArray, NSString;

@interface BDACSPornInspectConfig : NSObject

@property (readonly, nonatomic) BOOL enable;
@property (readonly, nonatomic) double threshold;
@property (readonly, copy, nonatomic) NSArray *contentType;
@property (readonly, copy, nonatomic) NSString *bussinessID;
@property (readonly, copy, nonatomic) NSString *BASE64Script;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
