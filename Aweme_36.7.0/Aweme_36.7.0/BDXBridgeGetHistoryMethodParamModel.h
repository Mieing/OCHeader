@class NSString, NSArray, NSNumber;

@interface BDXBridgeGetHistoryMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *enterForm;
@property (copy, nonatomic) NSString *enterFromSecond;
@property (copy, nonatomic) NSString *searchStyle;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *historyKey;
@property (copy, nonatomic) NSArray *includeTypeList;
@property (copy, nonatomic) NSArray *excludeTypeList;
@property (retain, nonatomic) NSNumber *maxNumber;
@property (retain, nonatomic) NSNumber *historyType;
@property (retain, nonatomic) NSNumber *distinctByDate;
@property (retain, nonatomic) NSNumber *isCrossDevice;
@property (retain, nonatomic) NSNumber *offset;
@property (retain, nonatomic) NSNumber *num;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
