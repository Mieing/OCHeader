@class NSString, NSAttributedString;
@protocol AWEHPPinTopBusinessUIConfigProtocol;

@interface AWEHPPinTopUIModifyModel : NSObject

@property (copy, nonatomic) NSString *primaryButtonText;
@property (copy, nonatomic) NSString *secondaryButtonText;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *subContent;
@property (copy, nonatomic) NSAttributedString *attributeContent;
@property (copy, nonatomic) NSString *headerURL;
@property (retain, nonatomic) id<AWEHPPinTopBusinessUIConfigProtocol> headerViewConfig;

- (void).cxx_destruct;

@end
