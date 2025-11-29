@class NSMutableArray, BaseResponse;

@interface AddContactLabelResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int labelCount;
@property (retain, nonatomic) NSMutableArray *labelPairList;

+ (void)initialize;

@end
