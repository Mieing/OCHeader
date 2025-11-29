@class NSString, NSAttributedString;
@protocol AWEHPPinTopBusinessUIConfigProtocol;

@interface AWEHPPinTopBottomPanelModel : NSObject <AWEHPPinTopDataModelProtocol>

@property (copy, nonatomic) NSString *primaryButtonText;
@property (copy, nonatomic) NSString *secondaryButtonText;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *subContent;
@property (copy, nonatomic) NSAttributedString *attributeContent;
@property (copy, nonatomic) NSString *headerURL;
@property (retain, nonatomic) id<AWEHPPinTopBusinessUIConfigProtocol> headerViewConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)pinTopUIType;
- (void).cxx_destruct;
- (BOOL)isValidWithError:(id *)a0;

@end
