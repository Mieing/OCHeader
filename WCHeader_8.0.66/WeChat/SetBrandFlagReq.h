@class BaseRequest, NSString;

@interface SetBrandFlagReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *brandUserName;
@property (nonatomic) unsigned int bitValue;
@property (nonatomic) unsigned int bitMask;

+ (void)initialize;

@end
