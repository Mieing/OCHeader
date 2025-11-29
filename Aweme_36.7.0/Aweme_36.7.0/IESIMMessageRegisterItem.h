@interface IESIMMessageRegisterItem : NSObject

@property (nonatomic) long long messageType;
@property (copy, nonatomic) id /* block */ convertMsgBlock;
@property (copy, nonatomic) id /* block */ convertStrangerMsgBlock;
@property (copy, nonatomic) id /* block */ convertHiHiBoxMsgBlock;
@property (copy, nonatomic) id /* block */ convertQuoteMsgBlock;
@property (copy, nonatomic) id /* block */ textDescribeBlock;
@property (copy, nonatomic) id /* block */ displayTextBlock;
@property (copy, nonatomic) id /* block */ searchMsgAvailableBlock;
@property (copy, nonatomic) id /* block */ searchMsgCountAvailableBlock;
@property (copy, nonatomic) id /* block */ searchMsgContentBlock;

- (void).cxx_destruct;

@end
