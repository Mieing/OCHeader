@class BaseRequest, LabelPair;

@interface UpdateContactLabelRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) LabelPair *labelPair;

+ (void)initialize;

@end
