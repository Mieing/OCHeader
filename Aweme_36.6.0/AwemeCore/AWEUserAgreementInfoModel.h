@class NSString, NSArray;

@interface AWEUserAgreementInfoModel : NSObject <AWEUserAgreementInfoModelProtocol>

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSArray *linkArray;
@property (copy, nonatomic) NSArray *urlArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
