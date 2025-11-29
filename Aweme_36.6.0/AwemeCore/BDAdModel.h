@class NSString;

@interface BDAdModel : NSObject <BDAd>

@property (copy, nonatomic) NSString *ad_id;
@property (copy, nonatomic) NSString *log_extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
