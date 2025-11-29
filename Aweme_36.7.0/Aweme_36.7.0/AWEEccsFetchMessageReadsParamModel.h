@class NSArray, NSNumber;

@interface AWEEccsFetchMessageReadsParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSArray *conversationIDs;
@property (copy, nonatomic) NSArray *conversationShortIDs;
@property (copy, nonatomic) NSArray *arrWhichUserIDs;
@property (retain, nonatomic) NSNumber *inbox;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
