@class NSString;

@interface BDCreateBtmIdParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *btm;
@property (nonatomic) BOOL enterNewPage;
@property (copy, nonatomic) NSString *curFrontPageId;
@property (copy, nonatomic) NSString *nextFrontPageId;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
