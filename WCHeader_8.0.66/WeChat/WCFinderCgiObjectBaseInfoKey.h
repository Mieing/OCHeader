@class NSString;

@interface WCFinderCgiObjectBaseInfoKey : NSObject

@property (retain, nonatomic) NSString *tid;
@property (retain, nonatomic) NSString *extraKey;
@property (retain, nonatomic) NSString *sessionBuffer;

+ (id)infoKeyWithTid:(id)a0 extraKey:(id)a1;

- (id)description;
- (void).cxx_destruct;

@end
