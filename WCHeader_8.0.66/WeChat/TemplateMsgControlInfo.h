@class NSString;

@interface TemplateMsgControlInfo : NSObject

@property (retain, nonatomic) NSString *foldWording;
@property (retain, nonatomic) NSString *foldActionWording;
@property (retain, nonatomic) NSString *footerWording;
@property (retain, nonatomic) NSString *footerActionWording;
@property (nonatomic) unsigned long long footerActionType;

- (void).cxx_destruct;

@end
