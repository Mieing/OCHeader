@class NSString, ReaderMessageFolder, TemplateReaderMessageFolder;

@interface ChatTimeNodeRightButtonInfo : NSObject

@property (nonatomic) BOOL hasRightButton;
@property (retain, nonatomic) NSString *rightButtonStr;
@property (weak, nonatomic) ReaderMessageFolder *messageFolder;
@property (weak, nonatomic) TemplateReaderMessageFolder *templateMessageFolder;

- (void).cxx_destruct;

@end
