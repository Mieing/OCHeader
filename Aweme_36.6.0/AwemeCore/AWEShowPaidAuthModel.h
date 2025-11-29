@class NSString, NSDictionary, AWEAwemeModel;

@interface AWEShowPaidAuthModel : NSObject

@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) unsigned long long source;
@property (copy, nonatomic) NSString *containerID;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (nonatomic, getter=isProcessed) BOOL processed;

- (void).cxx_destruct;
- (id)init;

@end
