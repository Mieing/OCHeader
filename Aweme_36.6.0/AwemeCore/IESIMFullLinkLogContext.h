@class NSString, AWEIMComponentContext, NSDictionary;

@interface IESIMFullLinkLogContext : NSObject

@property (nonatomic) long long level;
@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSString *businessName;
@property (retain, nonatomic) AWEIMComponentContext *context;
@property (copy, nonatomic) NSString *fileName;
@property (copy, nonatomic) NSString *executePhase;
@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSDictionary *extra;

+ (id)petElfContextWithBlock:(id /* block */)a0;

- (void).cxx_destruct;

@end
