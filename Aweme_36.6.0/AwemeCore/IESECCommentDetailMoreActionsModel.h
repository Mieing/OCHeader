@class NSArray, NSDictionary, NSString;

@interface IESECCommentDetailMoreActionsModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *actions;
@property (retain, nonatomic) NSDictionary *trackParam;
@property (retain, nonatomic) NSString *actionTitles;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)actionsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
