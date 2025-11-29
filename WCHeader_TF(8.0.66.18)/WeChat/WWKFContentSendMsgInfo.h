@class NSString, NSData;

@interface WWKFContentSendMsgInfo : MMObject

@property (copy, nonatomic) NSString *imageUrl;
@property (retain, nonatomic) NSData *imageData;
@property (copy, nonatomic) NSString *hintTitle;
@property (copy, nonatomic) id /* block */ sendMsgHandler;

- (void).cxx_destruct;

@end
