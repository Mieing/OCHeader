@class NSString;

@interface TemplateMsgRecvStateItem : NSObject

@property (retain, nonatomic) NSString *templateId;
@property (nonatomic) unsigned int recvState;
@property (retain, nonatomic) NSString *templateTitle;

- (void).cxx_destruct;

@end
