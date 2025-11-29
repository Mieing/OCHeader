@class NSString;

@interface AWEIMFormatTopicCardMessage : AWEIMMessage <AWEIMFormatTopicCardMessageProtocol>

@property (retain, nonatomic) id cardData;
@property (nonatomic) long long maxQueryCount;
@property (nonatomic) struct CGSize { double x0; double x1; } messageSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContentDict:(id)a0;
- (id)contentComponentName;
- (BOOL)supportRefactorCell;
- (void).cxx_destruct;
- (long long)templateType;

@end
