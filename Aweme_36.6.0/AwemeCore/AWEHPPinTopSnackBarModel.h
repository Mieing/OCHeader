@class NSString;

@interface AWEHPPinTopSnackBarModel : NSObject <AWEHPPinTopDataModelProtocol>

@property (copy, nonatomic) NSString *primaryButtonText;
@property (copy, nonatomic) NSString *content;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)pinTopUIType;
- (void).cxx_destruct;
- (BOOL)isValidWithError:(id *)a0;

@end
