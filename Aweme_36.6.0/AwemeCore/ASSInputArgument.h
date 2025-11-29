@class NSString;

@interface ASSInputArgument : NSObject

@property (retain, nonatomic) NSString *utdid;
@property (retain, nonatomic) NSString *tid;
@property (retain, nonatomic) NSString *userid;
@property (nonatomic) int envMode;
@property (copy, nonatomic) id /* block */ callback;

- (void).cxx_destruct;

@end
