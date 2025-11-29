@class NSString;

@interface AWEAwemeShareLinkInfo : NSObject

@property (copy, nonatomic) NSString *sharerID;
@property (copy, nonatomic) NSString *secSharerID;
@property (copy, nonatomic) NSString *linkID;
@property (copy, nonatomic) NSString *source;

- (void)setupLinkInfoWithParams:(id)a0;
- (void).cxx_destruct;
- (id)initWithParams:(id)a0;

@end
