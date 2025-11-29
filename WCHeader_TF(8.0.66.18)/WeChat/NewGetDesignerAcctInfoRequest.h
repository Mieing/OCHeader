@class BaseRequest, NSString;

@interface NewGetDesignerAcctInfoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int reqType;
@property (nonatomic) unsigned int designerUin;
@property (retain, nonatomic) NSString *designerId;

+ (void)initialize;

@end
