@class IESIMConvertMsgResult;
@protocol IESIMStrangerMessageProtocol;

@interface IESIMConvertStrangerMsgContext : NSObject

@property (retain, nonatomic) id<IESIMStrangerMessageProtocol> sMsg;
@property (retain, nonatomic) IESIMConvertMsgResult *result;

- (void).cxx_destruct;

@end
