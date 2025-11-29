@class NSString;

@interface AWESECPageLog : NSObject <SECInterestLogContent>

@property (copy, nonatomic) NSString *lastPage;
@property (copy, nonatomic) NSString *pageName;
@property (nonatomic) BOOL pageShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)contentDescription;
- (void).cxx_destruct;

@end
