@class IESIMConvertMsgResult;
@protocol IESIMMessageProtocol;

@interface IESIMConvertMsgContext : NSObject

@property (retain, nonatomic) id<IESIMMessageProtocol> ttMsg;
@property (nonatomic) BOOL disableQuote;
@property (nonatomic) long long chatModelType;
@property (retain, nonatomic) IESIMConvertMsgResult *result;

- (void).cxx_destruct;

@end
