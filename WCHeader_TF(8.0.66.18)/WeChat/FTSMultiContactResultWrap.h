@class NSString, NSArray, NSDictionary;

@interface FTSMultiContactResultWrap : NSObject

@property (nonatomic) char resultType;
@property (retain, nonatomic) NSString *keyword;
@property (retain, nonatomic) NSArray *arrResultContact;
@property (retain, nonatomic) NSDictionary *dicSearchMatchTip;

- (void).cxx_destruct;

@end
