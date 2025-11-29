@class NSString, NSNumber, NSDictionary;

@interface BDXBridgeOpenSearchCommentPanelMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *aweme_id;
@property (retain, nonatomic) NSNumber *aweme_index;
@property (copy, nonatomic) NSString *sessionid;
@property (copy, nonatomic) NSString *comment_id;
@property (retain, nonatomic) NSNumber *show_input;
@property (copy, nonatomic) NSDictionary *log_extra;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
