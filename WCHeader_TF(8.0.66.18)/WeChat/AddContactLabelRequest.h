@class BaseRequest, NSMutableArray;

@interface AddContactLabelRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int labelCount;
@property (retain, nonatomic) NSMutableArray *labelPairList;

+ (void)initialize;

@end
